#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long  n,cn,i,ar[3000],br[3000];
    while(cin>>n)
    {
	cn=0;
    for(i=0;i<n;i++)cin>>ar[i];
	 for(i=0;i<n-1;i++)
	{
	br[i]=abs(ar[i]-ar[i+1]);
	}
    sort(br+0,br+n-1);
    for(i=0;i<n-1;i++)
	{
	if(i+1 != br[i])
	cn++;
	}
     if(cn>0)cout<<"Not jolly"<<endl;
     else if(cn==0)cout<<"Jolly"<<endl;

    }

}
