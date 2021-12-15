#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int val[n],wt[n];
    double p[n];
    for(i=0;i<n;i++)
        cin>>wt[i];
    for(i=0;i<n;i++)
        cin>>val[i];
    int k;
    cin>>k;
    for(i=0;i<n;i++)
    {
        p[i]= double(val[i])/double(wt[i]);
    }
   for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(p[j]<p[j+1])
            {
                swap(p[j],p[j+1]);
                swap(wt[j],wt[j+1]);
                swap(val[j],val[j+1]);
            }
        }
    }
    cout<<endl;
    int cw=0;
    int c=0 ,rem;
    double maxm=0.0;
    for(i=0;i<n;i++)
    {
        if(cw+wt[i]<=k)
        {
            maxm+=val[i];
            cw+=wt[i];
            c++;
        }
        else
        {
            rem = k - cw;
            maxm+=p[i]*rem;
            i=j;
            break;
        }
    }
    cout<<"Maximum Value : "<<maxm<<endl;
    cout<<"item-weight"<<endl;
    for(i=0;i<c;i++)
        cout<<val[i]<<"-"<<wt[i]<<endl;
    cout<<val[j]<<"-"<<rem;
}
