#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int stack[10], pos=0;

void push(int a){
	if(pos<10){
		pos++;
		stack[pos]=a;
		cout<<"\nNumber "<<a<<" Added to Stack \nPress any key to Continue";
		getch();
		system("cls");
	}
	else{
		cout<<"\nStack Overflow, Number couldn't be added \nPress any key to Continue";
		getch();
		system("cls");
	}
}

void pop(){
	if(pos>0){
		cout<<"\nNumber "<<stack[pos]<<" Popped out of Stack \nPress any key to Continue";
		getch();
		system("cls");
		stack[pos]=0;
		pos--;
	}
	else{
		cout<<"\nStack Underflow, no number to be removed \nPress any key to Continue";
		getch();
		system("cls");
	}
}

void peek(){
	cout<<"\nNumber "<<stack[pos]<<" is on top of the Stack \nPress any key to Continue";
	getch();
	system("cls");
}

void printStack(){
	int i = pos;
	cout<<"\nElement present in Stack are: \n";
	while(i!=0){
		cout<<stack[i]<<"  ";
		i--;
	}
	cout<<"\nPress any key to Continue";
	getch();
	system("cls");
}

int main(){
	int flag=0;
	while(flag!=1){
		cout<<"Select an action: \n1. Add a number to stack \n2. Remove a number from stack \n3. Peek the topmost element \n4. Print the Stack \n5. Exit\n\n";
		int ch;
		cin>>ch;
		switch(ch){
			case 1: {
				cout<<"\nEnter a number to add: ";
				int a;
				cin>>a;
				push(a);
				break;
			}
			case 2: {
				pop();
				break;
			}
			case 3: {
				peek();
				break;
			}
			case 4: {
				printStack();
				break;
			}
			case 5: {
				flag=1;
				break;
			}
		}
	}
	cout<<"\n\nExiting Program...";
	exit(0);
}
