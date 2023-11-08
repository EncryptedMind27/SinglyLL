#include "node.h"

int main(){
	NODE head = NULL;
	addElement(&head,1);
	addElement(&head,24);
	addElement(&head,21);
	display(head);
	return 0;
}
