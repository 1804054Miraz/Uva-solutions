#include<bits/stdc++.h>
using namespace std;
#define forit(i, a) for ( __typeof( a.begin() ) i = a.begin(); i != a.end(); i++ )
vector<int>vec;
int count_digit(int num,int base){
	
	double num_of_digit = 0.0;
	for(int i=1;i<=num;i++){
		num_of_digit += log10(i);
	}
	num_of_digit/=log10(base);
	
	return floor(num_of_digit+1e-9)+1;
}


void simple_sieve(){

	for(int i=2;i<30;i++){
		vec.push_back(i);
		
		for(int j=2;j<i;j++){
			if(i%j==0){
				vec.pop_back();
				break;
			}
		
	}
}
}

void prime_factorization(int base,map<int,int>&factors){
	
	for(int i=0;i<vec.size();i++){
		if(base==1)
		break;
		if(base%vec[i] == 0){
			factors[vec[i]]++;
			base/=vec[i];
		}
	}
	if(base!=1)			///e.g 31 is a prime not divided by any num,so factors[31]++ will be.
	factors[base]++;
}

int count(int num,int map_first){
	int no_digit=0;
	while(num){
		no_digit += num/map_first; 	///calculate how many times the factors remain in the number.
		num/=map_first;
	}
	
	return no_digit;
}
			
int main(){
	simple_sieve();
	int num,b;
	
	while(cin>>num>>b){
		int zero = INT_MAX;
		if(b!=1){
		map<int,int >factors;
		prime_factorization(b,factors);
		int num_of_digit = count_digit(num,b);
	
		for(auto it = factors.begin();it!=factors.end();it++){
		
		zero = min(zero,count(num,it->first)/it->second);
			}
	cout<<zero<<" "<<num_of_digit<<endl;
}
	}
	return 0;
}
