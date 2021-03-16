#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int queue[10], pos=0;

void enqueue(int a){
	if(pos>9){
		cout<<"\nQueue is full number couldn't be added.\nPress any key to continue";
		getch();
		system("cls");
	}
	else{
		queue[pos]=a;
		pos++;
		cout<<"\n"<<a<<" added to Queue.\nPress any key to continue";
		getch();
		system("cls");
	}
}

void dequeue(){
	if(pos<=0){
		cout<<"\nQueue is Empty, nothing to remove.\nPress any to continue";
		getch();
		system("cls");
	}
	else{
		cout<<"\n"<<queue[0]<<" removed from queue.\nPress any to continue";
		getch();
		system("cls");
		int i;
		for(i=0; i<9; i++){
			queue[i]=queue[i+1];
		}
		queue[9]=0;
		pos--;
	}
}

void printQueue(){
	int i = 0;
	cout<<"\nElement present in Queue are: \n";
	while(i!=pos){
		cout<<queue[i]<<"  ";
		i++;
	}
	cout<<"\nPress any key to Continue";
	getch();
	system("cls");
}

int main(){
	int flag=0;
	while(flag!=1){
		cout<<"Select an action: \n1. Add a number to Queue \n2. Remove a number from Queue \n3. Queue Status \n4. Exit\n\n";
		int ch;
		cin>>ch;
		switch(ch){
			case 1: {
				cout<<"\nEnter a number to add: ";
				int a;
				cin>>a;
				enqueue(a);
				break;
			}
			case 2: {
				dequeue();
				break;
			}
			case 3: {
				printQueue();
				break;
			}
			case 4: {
				flag=1;
				break;
			}
		}
	}
	cout<<"\n\nExiting Program...";
	exit(0);
}
