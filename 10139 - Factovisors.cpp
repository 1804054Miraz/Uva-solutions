#include<bits/stdc++.h>
using namespace std;
int prime[5500],pt=0;
void sieve()
{
	int j,i;
	
	int mark[50000] = {};
	for(i=2; i<50000; i++){
		if(mark[i]==0){
			prime[pt++]=i;
			//cout<<i<<endl;
			for(j = i+i; j<50000 ;j +=i){
				mark[j]=1;
			}
		}
	}
   }

int functions(int num,int divider){
	
	for(int i=0; i<pt && prime[i]*prime[i]<=divider;i++)
	{
		if(divider%prime[i]==0){
			
		int cn1=0;
		while(divider%prime[i]==0)
		{
			cn1++;
			divider/=prime[i];
		}
		int cn2 = 0,temp = prime[i];
		while(temp <= num)
		{
			cn2 += num/temp;		///countin_factor = n/p + n/(p*p) + n/(p*p*p) +.......+n/(p multi int n times)
			temp *= prime[i];
		}
		if(cn2 < cn1)
		return 0;
	}
}
	if(divider != 1)
	{
		if(divider > num)	return 0;
	}
	return 1;
}		
	
int main()
{
	sieve();
	int num,divider;
	while(cin>>num>>divider){
		if(functions(num,divider)){
			printf("%d divides %d!\n",divider,num);
		}
		else 
		printf("%d does not divide %d!\n",divider,num);
	}
	return 0;
}
	
