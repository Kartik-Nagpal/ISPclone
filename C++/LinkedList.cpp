#include <iostream> 
#include <stdlib.h> 
using std::cout;
using std::endl;


struct node {
	int val;
	struct node* next; 
}; 

int main() { 
	node* head = NULL; 
	node* second = NULL; 
	node* third = NULL; 
	
	head = (node *)malloc(sizeof(node)); // allocate 3 nodes in the heap 
	second = (node *)malloc(sizeof(node)); 
	third = (node *)malloc(sizeof(node)); 

	head->val = 1; // setup first node 
	head->next = second;// note: pointer assignment rule 

	second->val = 2; // setup second node 
	second->next = third; 

	third->val = 3; // setup third link 
	third->next = NULL; 

	
	cout << "Linked List: [" << head->val << ", " << second->val << ", " << third->val << "]" << endl;

	node* cur = head;
	cout << "Linked List= ";
	while(cur != NULL) {
		cout << cur->val << " ";
		cur= cur->next;
	}
	cout << endl;
	
	return 0; 
}
