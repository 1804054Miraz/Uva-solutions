#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	vector<string>v1,v4;
	int n,count;
	string sr,str;
	cin >> n;
	cin.ignore(256, '\n');
    cin.ignore(256, '\n');
	while(n--)
	{
				v1.clear();
				v4.clear();
				count = 0;
		while(getline(cin, sr)){
			
		count++;
		if(sr== "") break;
		str = sr;
		v1.push_back(sr);
		str.erase(remove(str.begin(),str.end(),' '),str.end());
		v4.push_back(str);
	}
	sort(v1.begin(),v1.end());
		sort(v4.begin(),v4.end(),less<string>());
		
	for(int k=0;k<count-1;k++){
		sort(v4[k].begin(),v4[k].end());
	}
		for(int i=0;i<count-1;i++){
		for(int j=i+1;j<count;j++){
			if((v4[i] == v4[j]))
			cout<< v1[i] <<" = "<< v1[j] <<endl;
		
		}		
		}
		if(n)
		cout<<endl;
	}
}
