#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key,int searchFirst)//if searchFirst=1 return first occurrence else last
{
    int s=0,m=-1;
    int e=n;
    int count=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
             m= mid;

        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
      }
    return m;
}

int main()
{
   int t,n;
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
    int firstoccurrence=binarySearch(arr,n,key,1);//1for 1st occurrence
    int lastoccurrence=binarySearch(arr,n,key,0);//1for last occurrence
    int count=lastoccurrence-firstoccurrence+1;
    if(firstoccurrence!=-1)
    {
        cout<<"element"<<key<<"occurs"<<count<<"times";
    }
    else
    {
        cout<<"not present";
    }
}
     return 0;

    }
//time complexity O(log n)

