#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void printList(Node* n){
	while(n != NULL){
		cout << n->data<<" ";
		n = n->next;
	}
	cout<<endl;
}

void length(Node* n){
	int len = 0;
	while(n != NULL){
		len++;
		n = n->next;
	}
	cout << "\nLenght of List is : "<<len<<endl;
}

void push(Node** head_ref, int data){
	Node* new_node = new Node();
	
	new_node->data = data;
	new_node->next = *head_ref;
	*head_ref = new_node;
}

void InsertAfter(Node* prev_node, int data){
	if(prev_node == NULL){
		cout<<"Cannot be added"<<endl;
		return;
	}
	
	Node* new_node = new Node();
	
	new_node->data = data;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
}

void append(Node** head_ref, int data){
	Node* new_node = new Node();
	Node* last = *head_ref;
	
	new_node->data = data;
	new_node->next = NULL;
	
	if(*head_ref == NULL){
		*head_ref = new_node;
		return;
	}
	
	while(last->next != NULL){
		last = last->next
	}
	last->next = new_node;
	return;
}
int main(){
	Node* head = new Node(); 
	
	head->data = 1;
	head->next = NULL;
	
	printList(head);
	
	int new_data = 5;
	push(&head, new_data);
	
	printList(head);
}


