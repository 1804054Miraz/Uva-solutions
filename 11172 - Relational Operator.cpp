#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int testC,i;
	scanf("%d",&testC);
	for(i=0;i<testC;i++)
	{
		long long int a,b;
		cin>>a>>b;
		if(a==b) printf("=\n");
		else if(a>b) printf(">\n");
		else printf("<\n");
	}
	return 0;
}
