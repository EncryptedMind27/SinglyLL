#include "node.h"

NODE createNode(_element data){
	NODE newNode = (struct Node*)malloc(sizeof(struct Node));
	if(newNode == NULL){
		printf("Malloc Failed!");
		exit(1);
	}
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void addElement(NODE* head, _element data){
	NODE newNode = createNode(data);
	newNode->next = *head;
	*head = newNode;
}

void display(NODE head){
	NODE current = head;
	while(current != NULL){
		printf("%d,\n",current->data);		
		current = current->next;	
	}
}
