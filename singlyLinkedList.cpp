#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

typedef struct node SLL;
SLL *start=NULL, *sll, *rel;

void insert(){
	int dat;
	cout<<"\nEnter data for Node: ";
	cin>>dat;
	sll->data=dat;
	if(start==NULL){					//If start==null then no element has been added to the linked list
		sll->next = NULL;
		start = sll;
	}
	else{								//If start!=null then atleast one element has been added to the linked list
		sll->next = start;
		start = sll;
	}
}

void remove(){
	if(start==NULL){
		cout<<"The list is empty";
	}
	else{
		rel = start;
		while(rel->next->next!=NULL)
			rel=rel->next;
		
		sll=rel->next;
		rel->next=NULL;
		cout<<"\nElement at last position is deleted";
		free(sll);		
	}
}

void print(){
	if(start==NULL){
		cout<<"The list is empty";
	}
	else{
		rel=start;
		cout<<"\nElemets present in list: \n";
		while(rel!=NULL){
			cout<<" "<<rel->data;
			rel=rel->next;
		}
	}
}

int main(){
	int flag=0;
	while(flag!=1){
		cout<<"Select an action: \n1. Add a new Node \n2. Remove last Node \n3. Print \n4. Exit\n\n";
		int ch;
		cin>>ch;
		switch(ch){
			case 1: {
				insert();
				break;
			}
			case 2: {
				remove();
				break;
			}
			case 3: {
				print();
				break;
			}
			case 4: {
				flag=1;
				break;
			}
		}
	}
}
