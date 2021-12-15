#include<bits/stdc++.h>
using namespace std;
bool solve(int src,vector<int> &vis,vector<int> &order,vector<int>adj[])
{
    vis[src]=1;
    order[src]=1;
    for(auto x:adj[src])
    {
        if(!vis[x])
        {
            bool conf=solve(x,vis,order,adj);//recursion
            if(conf==true)
                return true;
        }
        else if(order[x]) return true;
    }
    order[src]=0;//remove current node from path
    return false;
}
 bool iscyclic(int V,vector<int>adj[])
 {
     vector<int> vis(V,0);
     vector<int> order(V,0);
     for(int i=0;i<V;i++)
     {
         if(!vis[i])
         {
             bool c=solve(i,vis,order,adj);
             if(c==true)
                return true;
         }
     }
     return false;
 }
int main()
{
    int V,E;
    cin>>V>>E;
    vector<int> adj[V+1];
    for(int i=0;i<E;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }

     vector<int> vis(0,V);
     vector<int> order(0,V);
     bool x=iscyclic(V,adj);
     cout<<x;
}















