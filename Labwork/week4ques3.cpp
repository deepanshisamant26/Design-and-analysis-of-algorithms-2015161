#include <algorithm>
#include <iostream>
using namespace std;
int Smallest(int arr[], int n, int k)
{
    sort(arr, arr + n);
    return arr[k - 1];
}
int largest(int arr[], int n, int k)
{
    sort(arr, arr+n);
    return arr[n-k];
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int c;
    cout<<"Enter the value of C as 0 if you want to find the smallest number"<<endl;
    cout<<"Enter the value of C as 1 if you want to find the largest number"<<endl;
    cout<<"Enter the value of c"<<endl;
    cin>>c;
    if(c==0)
     cout <<Smallest(arr, n, k)<<endl;
    else if(c==1)
    cout <<largest(arr, n, k);
    }
    return 0;
}
