#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	float gr;
	float a=0, b=1, c=a+b, d=b+c;
	for(int i=0; i<n; i++){
		if(i>0){
			printf("%d : %d = %f\n", d, c, d/c);
			Sleep(100);
		}
		c = a + b;
		d = b + c;
		a = b;
		b = c;
	}
}
