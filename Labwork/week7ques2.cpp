int main()
{
    int V,E;
    cout<<"Enter number of edges and vertices:"<<endl;
    cin>>V>>E;
    vector<node>adj;
    cout<<"Source Destination Weight"<<endl;
    for(int i=0;i<E;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj.push_back(node(u,v,w));
    }
    int inf = 100000000;
    int s,i;
    cout<<"Enter Source"<<endl;
    cin>>s;
    vector<int>dist(V+1,inf);
    vector<int> parent(V+1,-1);
    dist[s]=0;
    for(i=1;i<=V-1;i++)
    {
        for(auto it : adj)
        {
            if(dist[it.v]>dist[it.u]+it.w)
            {
              dist[it.v]=dist[it.u]+it.w;
              parent[it.v]=it.u;
            }
        }
    }
    int flag=0;
    for(auto it: adj)
    {
        if(dist[it.v]>dist[it.u]+it.w)
            {
              cout<<"Negative Cycle"<<endl;
              flag =1;
              break;
            }
    }
    if(!flag)
    {
        for(int i=1;i<=V;i++)
        {
            path(parent, i);
            cout<<" : "<<dist[i]<<endl;
        }
    }
}
