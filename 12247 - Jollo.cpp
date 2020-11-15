#include<cstdio>
#include<iostream>
#include<algorithm>
#define MAX(a,b,c) (a>b?(a>c?a:c):(b>c?b:c))
#define MID(a,b,c) (a>b?(a<c?a:(c>b?c:b)):(b<c?b:(c>a?c:a)))
#define MIN(a,b,c) (a<b?(a<c?a:c):(b<c?b:c))
#define MIN1(x,y) min(x,y)
#define MAX1(x,y) max(x,y)
using namespace std;
int main()
{
	int a,b,c,x,y,p1,p2,p3,r1,r2;
	while(scanf("%d%d%d%d%d",&a,&b,&c,&x,&y),a)
	{
	
	
	p1 = MIN(a,b,c);
	p2 = MID(a,b,c);
	p3 = MAX(a,b,c);
	r1 = MIN1(x,y);
	r2 = MAX1(x,y);
	//printf("p1=%d p2=%d p3=%d\nr1=%d r2=%d\n",p1,p2,p3,r1,r2);
	if(r2<p1 || r2<p2)	printf("-1\n");
	else if(r1<p1 && r2<p3)	printf("-1\n");
	
	/*else if((r1<p1 || r1>p1) && r2>p2 && r2<p3)
	{
		if(p2+1!=r2)	cout<<p2+1<<endl;
		else if(r2+1!=p3)	cout<<r2+1<<endl;
		else if(p3+1!=53)	cout<<p3+1<<endl;
		else printf("-1\n");
	}*/
	else if(r1<p1 && r2>p3)
	{
		if(p3+1!=r2)	cout<<p3+1<<endl;
		else if(r2+1!=53)	cout<<r2+1<<endl;
		else printf("-1\n");
	}
	else if(r1>p1 && r1<p2 && r2>p2 && r2<p3)	printf("-1\n");
	else if(r1>p1 && r1<p2 && r2>p3)	
	{
		if(p3+1!=r2)	cout<<p3+1<<endl;
		else if(r2+1!=53)	cout<<r2+1<<endl;
		else printf("-1\n");
	}
	else if(r1>p2 && r2<p3)
	{
		if(p2+1!=r1)	cout<<p2+1<<endl;
		else if(r1+1!=r2)	cout<<r1+1<<endl;
		else if(r2+1!=p3)	cout<<r2+1<<endl;
		else if(p3+1!=53)	cout<<p3+1<<endl;
		else printf("-1\n");
	}
	else if(r1>p2 && r1<p3 && r2>p3)
	{
		if(p2+1!=r1)	cout<<p2+1<<endl;
		else if(r1+1!=p3)	cout<<r1+1<<endl;
		else if(p3+1!=r2)	cout<<p3+1<<endl;
		else if(r2+1!=53)	cout<<r2+1<<endl;
		else printf("-1\n");
	}
	else if(r1>p3)
	{
		if(p1!=1)	printf("1\n");
		else if(p2!=2)	printf("2\n");
		else if(p3!=3)	printf("3\n");
		else if(r1!=4)	printf("4\n");
		else if(r2!=5)	printf("5\n");
		else printf("6\n");
	}
	}
		
		
}
