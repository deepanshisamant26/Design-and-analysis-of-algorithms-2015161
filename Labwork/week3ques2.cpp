#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,min_idx,comp=0,swaps=0;
   cin>>t;
   while(t--)
{ 
   cin>>n;
    int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(i=0;i<n-1;i++)
   {
       min_idx=i;
       for(j=i+1;j<n;j++)
       {
           comp++;
          if(arr[j]<arr[min_idx])
           {
               min_idx=j;
           }
       }
       if(min_idx!=i)
           swap(arr[min_idx],arr[i]);
           swaps++;
    }



   for(i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<comp<<" "<<swaps;

}
    return 0;
}
