#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t,m,n,i;
	char ch;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		cin>>ch;
		cin>>m>>n;
		if(ch == 'k')
		{
			int sum = (m*n);
			if(sum & 1) sum++;
			
			printf("%d\n",sum/2);
		}
		else if(ch=='r')
		{
		printf("%d\n",m);
		}
		else if(ch=='Q')
		{
		printf("%d\n",m);
		}
		else if(ch=='K')
		{
			if(m & 1) m++;
			if(n & 1) n++;
		printf("%d\n",(m*n)/4);
		}
	}
}
	/*	
		
		*/
		
