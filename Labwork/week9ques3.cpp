#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int f[n];
    for(i=0;i<n;i++)
        cin>>f[i];
    sort(f,f+n);
    for(i=0;i<n;i++)
        cout<<" "<<f[i];
    cout<<endl;
    for(j=0;j<n-1;j++)
    {
        f[j+1]=f[j]+f[j+1];
        sum+=f[j+1];
        cout<<sum<<endl;
        sort(f+j+1,f+n);
        for(i=j+1;i<n;i++)
          cout<<" "<<f[i];
        cout<<endl;

    }
    cout<<"Sum: "<<sum;

}
