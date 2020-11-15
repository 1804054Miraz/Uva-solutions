#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
	char ar[8][8],ch;
	int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<=8;j++){
			if(i==7 && j>7)
			break;
			cin>>ch;
			if('0'<=ch && ch<='9'){
				//cout<<ch<<endl;
				int p = ch-'0';
				//cout<<p<<" ";
				while(p--){
					ar[i][j]='a';
					//cout<<ar[i][j];
					j++;
				}
				j--;
			}
		else if(('a'<=ch && ch<='z')||('A'<=ch && ch<='Z')){
			ar[i][j]=ch;
			//cout<<ch<<" ";
		}
		}
		//cout<<endl;
	
		
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cout<<ar[i][j]; 
		}
		cout<<endl;
	}
	return 0;
}
