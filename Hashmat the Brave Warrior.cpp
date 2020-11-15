#include<stdio.h>
int main()
{
    long long int h,n,temp;
    while(scanf("%lld%lld",&h,&n)==2){

    if(h>n){
        temp=h;
        h=n;
        n=temp;
    }
    printf("%lld\n",n-h);
}
return 0;
}
