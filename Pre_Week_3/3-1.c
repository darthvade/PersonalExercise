/**
*
*/
#include<stdlib.h>
#include<stdio.h>

typedef int elem_t;

typedef struct LNode {
	elem_t data;
	struct LNode *next;
} LNode

void init_list(LNode *l);

void insert(Lnode *l, elem_t i);

void delete(Lnode *l, elem_t d);

void alter(LNode *l, elem_t a);

int search(LNode *l, elem_t s);

void print(LNode *l);

int main() {
	
	return 0;
}
void init_list(LNode *l){}

void insert(Lnode *l, elem_t i) {}

void delete(Lnode *l, elem_t d) {}

void alter(LNode *l, elem_t a) {}

int search(LNode *l, elem_t s) {}

void print(LNode *l) {}


