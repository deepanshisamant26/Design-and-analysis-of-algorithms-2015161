#include<iostream>
using namespace std;
 int main()
   {


      int t,i, j, n, temp,swap=0,comp=0;
      cin>>t;
while(t--){
       cin>>n;
      int array[n];
      for (i = 0; i < n; i++)
      cin>>array[i];


      for (i = 1; i < n; i++) {
      j = i-1;
      comp++;
      while ((j >=0) && (array[j] > array[j+1])) {
            if(array[j]>array[j+1]){
            comp++;
        }
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
        j--;

        swap++;
    }

}
     for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"number of swaps = "<<swap<<endl;
    cout<<"number of comparison ="<<comp<<endl;
}
    return 0;
   }
/*8
-23 65 -31 76 46 89 45 32
-31 -23 32 45 46 65 76 89
number of swaps = 13
number of comparison =20*/
