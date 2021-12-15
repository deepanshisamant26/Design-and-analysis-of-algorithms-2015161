#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of vertices"<<endl;
    cin>>n;
    int g[n][n],d[n][n];
    int i,j,k;
    cout<<"Enter matrix and use infinity as 10000000" <<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>g[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            d[i][j]=g[i][j];
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(d[i][j]>(d[i][k]+d[k][j])&&(d[i][k]!=10000000 && d[k][j] != 10000000))
                {
                 d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(d[i][j]== 10000000)
                cout<<"INF"<<"  ";
           else
                cout<<d[i][j]<<"  ";
        }
        cout<<endl;
    }

}
