#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
	
	int n,p,r,i,j;
	double d,b_comp,b_cost;
	string line,name,b_name;
	int T = 0;
		while(scanf("%d%d",&n,&p),n)
		{
			T++;
	//if(n==0 && p==0) return 0;
		
        for(i = 0; i < n; i++){
			cin.ignore();
           getline(cin,line);
	   }
	b_comp = 0.0;
	b_cost = 1E37;
	for(i=0;i<p;i++)
	{
		getline(cin, name);
		scanf("%lf%d\n",&d,&r);
		for(j=0;j<r;j++)
		{
			getline(cin, line);
		}
		if((double)r/p > b_comp)
		{
			b_comp = (double)r/p;
			b_cost = d;
			b_name = name;
	}
	else if((double)r/p == b_comp && d<b_cost)
	{
		b_comp = (double)r/p;
			b_cost = d;
			b_name = name;
		}
	//printf("last is last\n\n");
	}
	if(T>1) cout<<endl;
	cout << "RFP #" << T << endl;
	cout<<b_name<<endl;
	
}
}


