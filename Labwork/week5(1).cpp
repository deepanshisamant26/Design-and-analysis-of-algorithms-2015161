#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void countSort(char a[], int n)
{
 	int count [26]={0},arr[n];
 	char j;
 	for(int i=0;i<n;i++)
 	{
 		count[a[i]-97]+=1;
	}
	 
		int max = 1;
	for(int i=0;i<26;i++)
	{
		if(max<count[i])
		{
			max=count[i];
			j=i+97;
		}
	}
	if(max==1)
		cout<<"No Duplicates Present";
	else
		cout<<j<<"-"<<max<<endl;
		
   
}

int main()
{
	int t;
	cin>>t;
	while(t!=0)
	{
		
	char a[50],b;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b;
		a[i]=tolower(b);
		
	}
	countSort(a,n);
		t--;
	}
}
