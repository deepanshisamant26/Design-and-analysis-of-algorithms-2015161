#include<iostream>
using namespace std;
int main()
{
    int t,n,comp=0;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool present=false;
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        comp++;
        int mid=l+(r-l)/2;//for overflow condition
        if(arr[mid]==x)
        {
            present=true;
            break;
        }
        else if(arr[mid]>x)
        {
         r=mid-1;
        }

        else if(arr[mid]<x)
        {
         l=mid+1;
        }

    }
    if(present==true)
    {
        cout<<"Present"<<" ";
    }
    else
    {
        cout<<"Not present"<<" ";
    }
    cout<<comp;
    }
    return 0;
    }
//time complexity O(n)

