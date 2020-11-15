#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<iostream>

using namespace std;
vector<int>v[250];
queue<int>q;

int color[250],visit[250];
int bicolorabel_check(int source)
{
      memset(visit,0,sizeof visit);
      memset(color,0,sizeof color);
    int root,j,child;
    q.push(source);
     visit[source]=1;
      color[source]=1;
  
    while(!q.empty())
    {
    root = q.front();
    
    q.pop();
    for(j=0;j<v[root].size();j++)
    {
        child = v[root][j];
        
        if(visit[child]==0)
        { 
            visit[child] = 1;
            if(color[root]==1){
            color[child] = -1;
            }
            else{
                color[child]=1;
            }
            q.push(child);
          
        }
        
        
       else if(visit[child]==1)
        {
           if( color[root]==color[child])
           {
               return 0;
           }
        }
    }
    
    }
    
    return 1;
}

int main()
{
    int node,edge,a,i,b,source,get;
    while(scanf("%d",&node)==1)
    {
        if(node==0)
        {
            break;
        }
        scanf("%d",&edge);
        for(i=0;i<edge;i++)
        {
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
            if(i==0)
            {
                source=a;
            }
        }
        get = bicolorabel_check(source);
        
        if(get == 1)
        {
            printf("BICOLORABLE.\n");
        }
        else{
            printf("NOT BICOLORABLE.\n");
        }
        while(!q.empty())
        {
            q.pop();
        }
        for (i=0;i<node;i++)
        {
            v[i].clear();
        }
        
    }
    return 0;
}
