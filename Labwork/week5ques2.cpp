#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum,l=0,r=n-1;
    while(t--)
{
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>sum;
    sort(arr,arr+n);
    while(l<r)
    {
        if(arr[l]+arr[r]==sum)
            {
             cout<<" "<<arr[l]<<" "<<arr[r];
             r-- ;
            }
        else if(arr[l]+arr[r]<sum)
        {
            l++;
        }
        else if(arr[l]+arr[r]>sum)
        {
            r--;
        }
    }

}
    return 0;
}
