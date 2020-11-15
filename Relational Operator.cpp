#include<iostream>
using namespace std;
int main()
{
    long int t,n,m;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n>>m;
        if(n>m){
            cout<<">"<<endl;
        }
        else if(n<m){
            cout<<"<"<<endl;
        }
        else
            cout<<"="<<endl;
    }

}
