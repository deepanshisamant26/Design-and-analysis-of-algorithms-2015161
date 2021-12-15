#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u,v,wt;
    node(int f, int s,int t)
    {
        u=f;
        v=s;
        wt=t;
    }
};
bool compare(node a,node b)
{
    return a.wt<b.wt;
}
int findPar(int u, vector<int>&par)
{
   if(par[u]==u)
    return u;
   return par[u]=findPar(par[u],par);
}
void unionn(int u , int v , vector<int>&par, vector<int>&ranks)
{
    u = findPar(u,par);
    v = findPar(v,par);
    if(ranks[u]<ranks[v])
        par[u]=v;
    else if(ranks[u]>ranks[v])
        par[v]=u;
    else if (ranks[u]==ranks[v])
    {
        par[u]=v;
        ranks[v]++;
    }
}
int main()
{
    int V,E;
    cout<<"Enter number of Vertices and Edges"<<endl;
    cin>>V>>E;
    vector<node>adj;
    int u,v,w,i;
    cout<<"Enter s d and w"<<endl;
    for(i=0;i<E ;i++)
    {
        cin>>u>>v>>w;
        adj.push_back(node(u,v,w));
    }
     sort(adj.begin(),adj.end(),compare);
    vector<int>par(V);
    vector<int>ranks(V,0);
    int cost=0;
    for(i=0;i<V;i++)
    {
          par[i]=i;
    }
    for(auto it : adj)
    {
        if(findPar(it.u,par)!=findPar(it.v,par))
        {
            cost+=it.wt;
            unionn(it.u,it.v,par,ranks);
        }
    }
    cout<<"Minimum Spanning Weight: "<<cost<<endl;
    }
