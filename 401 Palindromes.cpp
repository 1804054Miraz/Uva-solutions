#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string org,rev;
	while(cin>>org){
		rev = org;
		int cn=0;
		int length = org.size();
		reverse(rev.begin(),rev.end());
		if(rev==org){
			for(int i=0;i<=length/2;i++){
					if(org[i]=='8') cn++;
					else if(org[i]=='A') cn++;
					else if(org[i]=='H') cn++;
					else if(org[i]=='I') cn++;
					else if(org[i]=='O') cn++;
					else if(org[i]=='M') cn++;
					else if(org[i]=='1') cn++;
					else if(org[i]=='T') cn++;
					else if(org[i]=='U') cn++;
					else if(org[i]=='V') cn++;
					else if(org[i]=='W') cn++;
					else if(org[i]=='X') cn++;
					else if(org[i]=='Y') cn++;
				}
				if(cn == ((length/2)+1)){
					cout<<org<<" -- is a mirrored palindrome."<<endl<<endl;	
				}
				else{
				cout<<org<<" -- is a regular palindrome."<<endl<<endl;
				}
			}
			else {
				cn=0;
				for(int i=0;i<length;i++){

				 if('B'<=org[i] && org[i]<='D') cn++;
				else if('F'<=org[i] && org[i]<='G') cn++;
				else if('K'==org[i]) cn++;
				else if('N'==org[i]) cn++;
				else if(org[i]>='P' && org[i]<='R') cn++;
					else if(org[i]=='4')cn++;
					else if(org[i]=='6')cn++;
					else if(org[i]=='7')cn++;
					else if(org[i]=='9')cn++;
				}
				int track=0;
				if(cn==0){
				for(int i=0;i<=length/2;i++){
					
			if((org[i]=='Z' && org[length-1-i]=='Z')) cn++;
			else if((org[i]=='S' && org[length-1-i]=='S')) cn++;
			else if((org[i]=='E' && org[length-1-i]=='E')) cn++;
			else if((org[i]=='J' && org[length-1-i]=='J')) cn++;
			else if(org[i] == org[length-1-i]) track++;
			else if((org[i]=='L' && org[length-1-i]=='J')||(org[i]=='J' && org[length-1-i]=='L')) track++;
			else if((org[i]=='2' && org[length-1-i]=='S')||(org[i]=='S' && org[length-1-i]=='2')) track++;
			else if((org[i]=='3' && org[length-1-i]=='E')||(org[i]=='E' && org[length-1-i]=='3')) track++;
			else if((org[i]=='5' && org[length-1-i]=='Z')||(org[i]=='Z' && org[length-1-i]=='5')) track++;
			else cn++;
			
			}
				if(cn>0){
					cout<<org<<" -- is not a palindrome."<<endl<<endl;
				}
				else{
					cout<<org<<" -- is a mirrored string."<<endl<<endl;
				}
				
			}
			else 
				cout<<org<<" -- is not a palindrome."<<endl<<endl;
			}
		}
		
		return 0;
	}
				
						
