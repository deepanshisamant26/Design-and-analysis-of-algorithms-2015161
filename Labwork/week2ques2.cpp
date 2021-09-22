 #include<iostream>
 using namespace std;
 int find_triplet(int arr[],int n)
 {
     bool trip_exits=false;
     for(int k=n-1;k>=0;k--)
     {
         int i=0;
         int j=k-1;
         while(i<j)
         {
             if(arr[i]+arr[j]==arr[k])
             {
                 cout<<"("<<arr[i]<<" ,"<<arr[j]<<","<<arr[k]<<")"<<endl;
                 trip_exits=true;
                 break;
             }

             else if(arr[i]+arr[j]>arr[k])
             {
                 j=j-1;
             }
             else{
                i+=1;
             }
         }
     }
         if(!trip_exits)
         {
             cout<<"doesn't exists";
         }
         return 0;

 }


 int main()
 {
     int t;
     while(t--)
     {
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

      find_triplet(arr,n);
     }
    return 0;
 }
