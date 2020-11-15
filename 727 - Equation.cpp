///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define 	ll long long int
#define 	pb push_back
#define 	mx 2147483648
#define 	mn -2147483648
#define 	speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const double pi = acos(-1.0);
const ll inf = 1e17 + 7;

int main(){
	int n,j,i;
	cin>>n;
	getchar();
	getchar();
	for(j=0;j<n;j++){
		stack<char>mystack;
		list<char>mylist;
	mystack.push('N');
	char ch,s[50];
	i=0;
		while((ch=getchar())!=EOF and ch!='\n'){
		 s[i]=ch;
		 getchar();
		 i++;
	 }
	 s[i]='\0';
	 int len=i;
	 cout<<s<<endl;
	 for(i=0;i<len;i++){
			if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
				//cout<<mystack.top()<<endl;
				if((s[i]=='+' || s[i]=='-') && (mystack.top()=='*' || mystack.top()=='/' || mystack.top()=='+' || mystack.top()=='-'))
				//  if(prec(s[i])<prec(mystack.top()))
				{
					while(mystack.top()=='*' || mystack.top()=='/' || mystack.top()=='+' || mystack.top()=='-'){
						mylist.push_back(mystack.top());
						mystack.pop();
					}
				mystack.push(s[i]);
			}
		else  if((s[i]=='*' || s[i]=='/') and  (mystack.top()=='*' || mystack.top()=='/'))
			{
				mylist.push_back(mystack.top());
				mystack.pop();
				mystack.push(s[i]);
			}
			else 
			mystack.push(s[i]);
		}
		else	if(s[i]==')'){
				while(mystack.top()!=('(')){
					mylist.push_back(mystack.top());
					mystack.pop();
				}
				mystack.pop();
			}
		else if(s[i]>='0' and s[i]<='9'){
			mylist.push_back(s[i]);
			}
		 }	
		 while(mystack.top()!='N'){
			 mylist.push_back(mystack.top());
			 mystack.pop();
		 }
		 while(!mylist.empty()){
			 cout<<mylist.front();
			 mylist.pop_front();
		 }
		cout<<endl;
		if(j<n-1)
		cout<<endl;
	 }
	 
		 
	return 0;
}

