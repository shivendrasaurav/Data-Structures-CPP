#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct LinkedList{
	int data;
	struct LinkedList *next;
};

typedef struct LinkedList *node;

//Use this function to create new nodes for your LinkedList
node createNode(){
	node start;
	start = (node)malloc(sizeof(node));
	start->next = NULL;
	return start;	
}

//Function to add new elements to your linked list
node insertNewNode(node head, int val){
	node temp, p;
	temp = createNode();
	temp->data = val;
	
	if(head==NULL){
		head=temp;
	}
	else{
		p = head;
		while(p->next!=NULL){
			p = p->next;
		}
		p->next = temp;
	}
	cout<<"\nNew node has been added to Linked List, Press any button to continue";
	getch();
	system("cls");
	return head;
}

int removeLastNode(node head){
	node p;
	p = head;
	while(p->next->next != NULL){	//Check if next of next element is NULL or not, if yes then next element has to be removed
    	p = p->next;
	}
	p->next = NULL;					//If next of next is null, it means we are on 2nd last element now and we will set its next as NULL to remove last element from Linked List
	cout<<"\nLast node of the Linked List has been removed, Press any button to continue";
	getch();
	system("cls");
	return 0;
}

int printAllNodes(node head){
	cout<<"\nThe nodes present in Linked List are: \n";
	node p;
	p = head;
	while(p->next != NULL){		//Traverse till next element is NULL, i,e; last element
    	p = p->next;
		cout<<"->"<<p->data<<"  ";
	}
	cout<<"\nPress any button to continue";
	getch();
	system("cls");
	return 0;
}

int main(){
	int flag=0;
	node start = createNode();
	while(flag!=1){
		cout<<"Select an action: \n1. Add a new Node \n2. Remove last Node \n3. Print \n4. Exit\n\n";
		int ch;
		cin>>ch;
		switch(ch){	
			case 1: {
				int val;
				cout<<"\nEnter a number to add in Linked List: ";
				cin>>val;
				insertNewNode(start, val);
				break;
			}
			case 2: {
				flag = removeLastNode(start);
				break;
			}
			case 3: {
				flag = printAllNodes(start);
				break;
			}
			case 4: {
				flag=1;
				break;
			}
		}
	}
}
