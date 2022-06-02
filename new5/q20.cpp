#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k;

		cin >>n>>k;

		int arr[n+1];
		arr[1]=0;

		for(int i=0;i<n-1;i++){
			int a,b;
			cin >>a>>b;
			arr[b]=a;
		}

		int arr1[n+1];
		for(int i=1;i<n+1;i++)arr1[i]=0;

		for(int i=1;i<n+1;i++)arr1[arr[i]]++;

		

		int val[n+1];
	  val[1]=k;


	}
}