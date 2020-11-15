#include<iostream>
#include<cstdio>
#include<vector>
#include<list>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<char>vec[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			char ch;
			cin>>ch;
			vec[i].push_back(ch);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(vec[i][j]==1){
			vec[i].push_back(0);
		}

			cout<<vec[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

