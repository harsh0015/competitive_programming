#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n];
		for(int i=0;i<n;i++)
			cin >>arr[i];

		int max=arr[0];

		int index=0;

		int arr2[n];

		arr2[0]=0;

		for(int i=1;i<n;i++){
			if(arr[i]>max)
			{
				max=arr[i];
				arr2[i]=i;

			}
			else arr2[i]=arr2[i-1];
		}

		int in=arr2[n-1];
		int l=n-1;

		while(in>=0){
			for(int i=in;i<=l;i++)cout <<arr[i]<<" ";
            l=in-1;
			in =arr2[in-1];

		  if(l<0)break;

		}

		cout <<endl;
	}
}