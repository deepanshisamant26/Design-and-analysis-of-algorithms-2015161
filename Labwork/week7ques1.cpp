#include<bits/stdc++.h>
using namespace std;
void path(vector<int>& parent, int j){
if (parent[j] == - 1){
cout<<j;
return;
}
printf("%d ", j);
path(parent, parent[j]);
}

int main()
{
    int V,E,src;
    cout<<"Enter Number of Edges and Vertices "<<endl;
    cin>>V>>E;
    vector<pair<int,int> >adj[V+1];
    int u,v,w;
    cout<<"Source Destination Weight"<<endl;
    for(int i=0;i<E;i++)
    {
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    cout<<"Source"<<endl;
    cin>>src;
    set<pair<int,int>> s;
    vector<int>distTo(V+1,INT_MAX);
    vector<int> parent(V+1, -1);
    distTo[src]=0;
    s.insert({0,src});
    while(!s.empty())
    {
        auto x=*(s.begin());
        s.erase(x);
        for(auto it:adj[x.second])
        {
            int next = it.first;
            int nextdis = it.second;
            if(distTo[next]>distTo[x.second]+nextdis)
            {
                distTo[next] = distTo[x.second]+nextdis;
                s.insert({distTo[next],next});
                parent[it.first]= x.second;
            }
        }
    }
    for(int i=1;i<V+1;i++)
    {
        path(parent, i);
        cout<<":"<<distTo[i]<<endl;
    }
}

