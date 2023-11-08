#ifndef NODE_LIST
#define NODE_LIST

#include <stdlib.h>
#include <stdio.h>

typedef int _element;

typedef struct Node{
	_element data;
	struct Node* next;
} *NODE;

NODE createNode(_element data);
void addElement(NODE* head, _element data);
void display(NODE head);

#endif
