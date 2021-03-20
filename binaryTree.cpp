#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct binaryTree{
	int data;
	struct binaryTree *left;
	struct binaryTree *right;
};

typedef struct binaryTree *node;

node createNode(int val){
	node temp;
	temp = (node)malloc(sizeof(node));
	temp->right = NULL;
	temp->left = NULL;
	temp->data = val;
	return temp;
}

node insertNewNode(node root, int data){
	node temp, p;
	temp = createNode(data);

	if(data >= root->data){							//If new data is greater than root, then we will place the data on right leaf
		insertNewNode(root->right, data);
	}		
	else if(data >= root->data){					//If new data is smaller than root, insert it in left leaf
		insertNewNode(root->left, data);
	}
}

int removeLastNode(node root){
	return 0;
}

int printInOrder(node root){
	return 0;
}
int main(){
	int flag=0;
	int root;
	cout<<"Enter root element of tree: ";
	cin>>root;
	node start = createNode(root);
	cout<<"\nRoot Element Added, press any key to continue";
	getch();
	system("cls");
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
				flag = printInOrder(start);
				break;
			}
			case 4: {
				flag=1;
				break;
			}
		}
	}
}
