#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int m,n;
	while(scanf("%d%d",&m,&n),m+n)
{
	int result,p,q;
	p = max(m,n);
	q = min(m,n);
	if(q==1) result = p;
	else if(q==2)
	{
		
		if(p%2==0){
				result = ((p/2) + ((p/2)%2)) * 2;
			}
		else if(p%2==1)	result = (p/2 + p%2) * 2;
	}
	else {
		int sum = p*q;
		if(sum & 1) sum++;
		result = sum/2;
	}
	printf("%d knights may be placed on a %d row %d column board.\n",result,m,n);
}
}
