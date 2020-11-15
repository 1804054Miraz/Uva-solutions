#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&n);
		int ar[n];
		for(int j=0;j<n;j++)
		{
			
			scanf("%d",&ar[j]);
		}
		sort(ar,ar+n);
		printf("Case %d: %d\n",i+1,ar[n-1]);
	}
	return 0;
}
		
