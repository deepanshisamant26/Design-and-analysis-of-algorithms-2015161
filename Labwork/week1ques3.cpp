#include<iostream>
#include<math.h>
using namespace std;

int main()
{
     
    int t,size ,low=0,i ,m,comp=0,jump=0,flag=0, key,step=sqrt(size);
   cin>>t;
while(t--)
{   
   cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    
    cin>>key;

   for(i=0;i<size;i+=step)
    {
        comp++;
        if(a[i]==key)
        {
            m= i;


        }
        else if(a[i]<key){
            low=i;
        }
        else
            {
                break;
            }
         jump++;
    }
 
    for(i=low;i<size;i++)
    {
        if(a[i]==key)
        {
        flag=1;
        break;

        }
    }
    if(flag)
        cout<<"Present";
    else
        cout<<"Not Present";
    cout<<" "<<comp;
}
    return 0;



}
