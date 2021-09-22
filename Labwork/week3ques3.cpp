#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,min_idx;
    cin>>t;
while(t--)
{
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
   int flag=0;
    for(i=0;i<n-1;i++)
  {
   if(arr[i]==arr[i+1])
   {
      flag=1;
      break;
   }
  }
   if(flag)
   {
       cout<<"YES";
          }
   else
   {
       cout<<"NO";
    }




    return 0;
}

