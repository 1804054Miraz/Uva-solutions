#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
	vector<string>vt,vec,vnew,v2,v3;
	string sr;
	while(cin>>sr)
	{
		if(sr=="#") break;
		v2.push_back(sr);
		transform(sr.begin(),sr.end(),sr.begin(),::tolower);
		sort(sr.begin(),sr.end());	
		vt.push_back(sr);
		vec.push_back(sr);
	}
	vector<string>::iterator it,jt;
	int cn=0;
	 it=vt.begin();
	for(;it!=vt.end();it++)
	{
		jt=vec.begin();
		cn=0;
		for(;jt!=vec.end();jt++){
			if(*jt==*it){
				cn++;
			}
		}
		if(cn==1){
			vnew.push_back(*it);
		}
	}
	string p,q;
		it = v2.begin();
	for(;it!=v2.end();it++)
	{
		 q = *it;
		 transform(q.begin(),q.end(),q.begin(),::tolower);
		 sort(q.begin(),q.end());
		 jt = vnew.begin();
		for(;jt!=vnew.end();jt++)
		{
			p = *jt;
			if(p==q){
				v3.push_back(*it);
			}
		}	
	}
	it = v3.begin();
	for(;it!=v3.end();it++)
	{
		jt = it;
		for(;jt!=v3.end();jt++){
			if(*it>*jt)
			{
				auto temp = *it;
				*it = *jt;
				*jt = temp;
			}
		}
		cout<<*it<<endl;
	}
}
		



