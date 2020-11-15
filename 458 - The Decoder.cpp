#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,length;
	string s;
	while(getline(cin,s))
{
	length = s.size();
	for(i=0;i<length;i++)
	{
	 if(s[i]>='a' && s[i]<='z')   s[i] = s[i]-7;
	else if(s[i]>='A' && s[i]<='Z')   s[i] = s[i]-7;
	else s[i]=s[i]-7;
	cout<<s[i];
	}
	cout<<endl;
	
} 
}
