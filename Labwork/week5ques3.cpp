#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int i=0,j=0;
    while(i<n)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;
        }
        else
        {
           cout<<arr1[i]<<" ";
           i++;
           j++;
        }

    }
}
 return 0;
}

