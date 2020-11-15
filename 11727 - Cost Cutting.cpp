#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if((a>b && a<c)|| (a>c && a<b))
		cout<<"Case "<<i+1<<": "<<a<<endl;
		else if((b>a && b<c)|| (b>c && a>b)) 
		cout<<"Case "<<i+1<<": "<<b<<endl;
		else if((c>b && a>c)|| (a<c && c<b)) 
		cout<<"Case "<<i+1<<": "<<c<<endl;
		
		else if(a==b)cout<<"Case "<<i+1<<": "<<a<<endl;
		else if(c==b)cout<<"Case "<<i+1<<": "<<c<<endl;
		else if(c==a)cout<<"Case "<<i+1<<": "<<a<<endl;
		else if(a==b || b==c)cout<<"Case "<<i+1<<": "<<a<<endl;
		
	}
}
		
		
