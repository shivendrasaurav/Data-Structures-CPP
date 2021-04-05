#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number : ";
	cin>>n;
	for(int i=0; i<n; i++){
		for(int j=n; j>=i; j--){
			cout<<" ";
		}
		for(int j=0; j<=i; j++){
			cout<<"*";
		}
		for(int j=0; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}



/*

		for(int j=0; j<=i/2; j++){
			cout<<" ";
		}

*/
