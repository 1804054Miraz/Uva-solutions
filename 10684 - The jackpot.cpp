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
	int n;
	ll a,sum=0,mxsum=0;
	while(cin>>n){
		if(n==0) 
		break;
		sum=mxsum=0;
	while(n--){
		cin>>a;
		sum += a;
		if(sum<0){
			sum=0;
		}
		if(mxsum<sum){
			mxsum = sum;
		}
	}
	if(mxsum>0)
	cout<<"The maximum winning streak is "<<mxsum<<"."<<endl;
	else
	cout<<"Losing streak.\n";
}
		
	return 0;
}

