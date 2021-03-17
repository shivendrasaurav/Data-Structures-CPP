#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct sll{
	int data;
	struct sll *next;
};

typedef struct sll node;
node *ptr, *head;

void insert(int data, node *ptr){
	while(ptr->next)
		ptr->next = ptr;
	node *newnode = (node*)malloc(sizeof(node));
	newnode->data = data;
	newnode->next = NULL;
	ptr->next = newnode;
}

void print(node *a){
	if(a!=NULL)
	    printf("%d, ",a->data);
	print(a->next);
}

int main(){
	head = (node*)malloc(sizeof(node));
	ptr = head;
	head->next = ptr;
	ptr->next = NULL;
	insert(12, ptr);
	insert(13, ptr);
	insert(14, ptr);
	print(ptr->next);
}
