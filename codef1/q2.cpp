#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;
		cin >>n;
		int arr[n+1];

		for(int i=1;i<n+1;i++)
			cin>> arr[i];

		int m;
		cin >>m;
		int arr1[m+1];

		for(int i=1;i<m+1;i++)
			cin >>arr1[i];

		int s1=arr[1];
		int s2=arr1[1];

		for(int i=2;i<n+1;i++)
		{
			arr[i]=arr[i]+arr[i-1];

			if(arr[i]>s1)
				s1=arr[i];
		}

		for(int i=2;i<m+1;i++)
		{
			arr1[i]=arr1[i]+arr1[i-1];
			if(arr1[i]>s2)
				s2=arr1[i];
		}

		
		if(s1<0 && s2>0 )
			cout <<s2<<endl;
		if(s1>0 && s2<0 )
			cout <<s1<<endl;
		if(s1>0 && s2>0 )
			cout <<s2+s1<<endl;

		if(s1<0 && s2<0 )
			cout <<0<<endl;


	}
}