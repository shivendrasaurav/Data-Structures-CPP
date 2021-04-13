#include<iostream>
#include<cstring>
using namespace std;

int cnt=0;

void checkPal(char str[], int len){
	int a=0, b=len;
	while(a!=len){
		if(str[a]!=str[b])
			return;
	 	a++;
		b--;
	}
	cnt++;
}

int main(){
	char word[200];
	gets(word);
	int wL = strlen(word);
	for(int i=0; i<wL; i++){
		char temp[10];
		int j=0;
		while(word[i]!=' '){
			temp[j]=word[i++];
			j++;
		}
		checkPal(temp, strlen(temp));
	}
	
	
	cout<<cnt;
}
