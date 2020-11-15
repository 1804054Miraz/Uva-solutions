#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
ll check[1000];
vector<ll>v[1000];
int visit[1000];
queue<ll>q;
ll level[1000];

int far(ll st_node,int TTL)
{
    memset(visit,0,sizeof visit);
    memset(level,0,sizeof level);
    
    int root,count2=1,j,child;
    
    q.push(st_node);
    level[st_node]=0;
     visit[st_node]=1;
 
  
    while(!q.empty())
    {
    root = q.front();
    
    q.pop();
    for(j=0;j<v[root].size();j++)
    {
        child = v[root][j];
      
        if(visit[child]==0)
        { 
           
              level[child] = level[root]+1;
            visit[child] = 1;
          
            q.push(child);
            if(level[child]<=TTL)
            {
                 count2++;
            }
            
          
        }
    }
    }
    return count2;
}
int main()
{
    int node,i,j=0,TTL,count1=0,result=0;
    long long  a,b,st_node;
    while(scanf("%d",&node)==1)
    {
        
        
        if(node==0)
        {
            break;
        }
        count1=0;
        memset(check,0,sizeof check);
        for(i=0;i<node;i++)
        {
            
          cin>>a>>b;
           v[a].push_back(b);
           v[b].push_back(a);
           if(check[a]==0)
           {
              
               check[a]=1;
               count1++;
           }
            if(check[b]==0)
           {
               check[b]=1;
               count1++;
           }
           
        }
       
        
        while(scanf("%lld",&st_node)==1)
        {
            scanf("%d",&TTL);
            
             
            if(st_node==0 && TTL==0)
            {
                break;
            }
           
             result=far(st_node,TTL);
             result = count1 - result;
             printf("Case %d: %d nodes not reachable from node %lld with TTL = %d.\n",j+1,result,st_node,TTL);
             j++;
        }
      int k=0;
      while(k<node)
      {
          v[k].clear();
          k++;
      }
       
    }
}
