#include<cstdio>
int main()
{
    int a,b,c,t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
    scanf("%d%d%d",&a,&b,&c);

    if((a>b && a<c)||(a<b && a>c)){
        printf("Case %d: %d\n",i,a);
    }
    else if((b>a && b<c)||(b<a && b>c)){
        printf("Case %d: %d\n",i,b);
    }
    else printf("Case %d: %d\n",i,c);
    }
}
