#include<bits/stdc++.h>
using namespace std;
bool findPath(int s,int d,vector<vector<int> >&g)
{
    if(s==d)
        return true;
    int n=g.size();
    vector<bool>vis(n,false);
    vis[s]=true;
    stack<int>st;
    st.push(s);
    while(!st.empty())
    {
        int a = st.top();
        st.pop();
        for(int x : g[a])
        {
            if(x==d)
                return true;
            if(!vis[x])
            {
                vis[x]=true;
                st.push(x);
            }
        }
    }
    return false;
}
int main()
{
    int V,E;
    cout<<"Enter vertices and edges"<<endl;
    cin>>V>>E;
    cout<<"Enter src and dest for edge"<<endl;
    vector<vector<int> >g(V);
    int u,v;
    for(int i=0;i<E;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    cout<<"Enter s and d"<<endl;
    int s,d;
    cin>>s>>d;
    if(findPath(s,d,g))
    {
        cout<<"Yes Path Exists";
    }
    else
        cout<<"No Such Path Exists";
}
