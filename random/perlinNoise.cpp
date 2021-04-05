#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	cout<<"How many numbers do you want to generate : ";
	int n;
	cin>>n;
	srand(time(0));
	int arr[n];
	for(int i=0; i<n; i++){
		arr[i]=0;
	}
	int oct = 200;
	for(int i=0; i<8; i++){
		for(int j=0; j<n; j++){
			int temp = rand()%oct;
			arr[j] = arr[j] + temp;
		}
		oct = oct/2;
	}
	cout<<"\n\nFinal list of randomly generated numbers: \n";
	for(int i=0; i<n; i++){
		cout<<"("<<10*(i+1)<<","<<arr[i]<<")\n";
	}
}
