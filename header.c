// header.c
#include <stdlib.h>
#include "header.h"

noh *create_noh(enum noh_type nt, int children) {
	static int IDCOUNT = 0;
	noh *newn = (noh*)calloc(1,
		sizeof(noh)+
		sizeof(noh*)*(children-1));
	newn->type = nt;
	newn->childcount = children;
	newn->id = IDCOUNT++;
	return newn;
}

void print(noh *root) {
	FILE *f = fopen("output.dot", "w");
	
	fprintf(f, "graph {\n");
	print_rec(f, root);
	fprintf(f, "}\n");

	fclose(f);
}

const char *get_label(noh *no) {
	static char aux[100];
	switch (no->type) {
		case INTEGER:
			sprintf(aux, "%d", no->intv);
			return aux;
		case FLOAT:
			sprintf(aux, "%f", no->dblv);
			return aux;
		case IDENT:
			return no->name;
		default:
			return noh_type_names[no->type];
	}
}

void print_rec(FILE *f, noh *root) {
	fprintf(f, "N%d[label=\"%s\"];\n",
		root->id, get_label(root));
	for(int i = 0; i < root->childcount; i++) {
		print_rec(f, root->children[i]);
		fprintf(f, "N%d -- N%d;\n",
			root->id, root->children[i]->id);
	}
}

int search_symbol(char *nome) {
	// busca linear, não eficiente
	for(int i = 0; i < simbolo_qtd; i++) {
		if (strcmp(tsimbolos[i].nome, nome) == 0) {
			return i;
		}
	}
	return -1;
}

void check_declared_vars(noh **root,
	noh *no) {
	noh *nr = *root;

	if (no->type == ASSIGN) {
		int s = search_symbol(
			no->children[0]->name);
		if (s != -1)
			tsimbolos[s].exists = true;
	}
	else if (no->type == IDENT) {
		if (nr->type == ASSIGN && no == nr->children[0])
			return;

		int s = search_symbol(no->name);
		if (s == -1 || !tsimbolos[s].exists) {
			printf("%d: Galvão: o %s estava impedido.\n",
				0, no->name);
			error_count++;
		}
	}
}

void visitor_leaf_first(noh **root,
	visitor_action act) {
	noh *r = *root;
	for(int i = 0; i < r->childcount; i++) {
		visitor_leaf_first(&r->children[i],
			act);
		if (act != NULL)
			act(root, r->children[i]);
	}
}

simbolo *simbolo_novo(char *nome, int token) {
	tsimbolos[simbolo_qtd].nome = nome;
	tsimbolos[simbolo_qtd].token = token;
	tsimbolos[simbolo_qtd].exists = false;
	simbolo *result = &tsimbolos[simbolo_qtd];
	simbolo_qtd++;
	return result;
}

bool simbolo_existe(char *nome) {
	// busca linear, não eficiente
	for(int i = 0; i < simbolo_qtd; i++) {
		if (strcmp(tsimbolos[i].nome, nome) == 0)
			return true;
	}
	return false;
}

void debug() {
	printf("Simbolos:\n");
	for(int i = 0; i < simbolo_qtd; i++) {
		printf("\t%s\n", tsimbolos[i].nome);
	}
}


