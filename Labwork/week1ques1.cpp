#include<iostream>
using namespace std;
int main()
{

    int t,n,comp=0,flag=0;
    cin>>t;
    while(t--)
   {
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
      for(int i=0;i<n;i++)
    {
        comp++;
        if(arr[i]==key)
        {
          flag=1;
          break;
        }
    }
    if(flag)
    {
        cout<<"Present ";
    }
    else
    {
        cout<<"Not Present";
    }
    cout<<comp;
     }
   return 0;

    }
//time complexity O(n)

