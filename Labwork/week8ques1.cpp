 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
  int V,E;
 cout<<"Enter number of Vertices and Edges"<<endl;
 cin>>V>>E;
 vector<pair<int,int> >adj[V];
 int i,u,v,w;
 cout<<"Enter source destination weight"<<endl;
 for(i=0;i<E;i++)
 {
      cin>>u>>v>>w;
      adj[u].push_back(make_pair(v,w));
      adj[v].push_back(make_pair(u,w));
 }
 int parent[V];
 int key[V];
 bool mst[V];
 for(i=0;i<V;i++)
 {
     parent[i]=i;
     key[i]=INT_MAX;
     mst[i]=false;
 }
 key[0]=0;
 parent[0]=-1;
 for(int i=0;i<V-1;i++)
 {
     int mini=INT_MAX;
     int u;
     for(int j=0;j<V;j++)
     {
         if(mst[j]==false && key[j]<mini)
         {
             mini=key[j];
             u=j;
         }
     }
     mst[u]=true;
     vector<pair<int,int> >::iterator it;
     for(it=adj[u].begin();it!=adj[u].end();it++)
     {
         int v = it->first;
         int wt= it->second;
         if(mst[v]==false && wt<key[v])
            {
                parent[v]=u;
                key[v]=wt;
            }
     }
 }
 int wt=0;
  for(int i=1;i<V;i++)
    wt+=key[i];
  cout<<"Minimum Spanning Weight: "<<wt;
 }
