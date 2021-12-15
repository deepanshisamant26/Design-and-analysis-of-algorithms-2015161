#include<bits/stdc++.h>
using namespace std;
bool bipartite(int node, vector<int>adj[],int colour[])
{
   queue<int>q;
   q.push(node);
   colour[node]=1;
   while(!q.empty())
   {
       int n = q.front();
       q.pop();
        for(auto it : adj[n])
       {
           if(colour[it]== -1)
           {
               colour[it] = 1 - colour[n];
               q.push(it);
           }
           else if(colour[it] == colour[n])
            return false;
       }
   }
   return true;
}
bool check(vector<int> adj[], int V)
{
    int colour[V];
    memset(colour,-1,sizeof colour);
    for(int i=0;i<V;i++)
    {
        if(colour[i]== -1)
        {
            if(!bipartite(i,adj,colour))
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int V,E;
    cout<<"Enter Vertices and Edges"<<endl;
    cin>>V>>E;
    vector<int> adj[V];
    cout<<"Enter s and d"<<endl;
    for(int i=0;i<E;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool res = check(adj,V);
    if(res==true)
        cout<<"Yes Bipartite"<<endl;
    else
        cout<<"Not Bipartite"<<endl;
}
