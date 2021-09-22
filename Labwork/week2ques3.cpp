#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,count_=0,key;
    cin>>t;
   while(t--)
{ 
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      {
          if(arr[i]-arr[j]==key || arr[j]-arr[i]==key )
          {
              count_++;
          }
      }
   }
   cout<<count_;

}       return 0;

}
