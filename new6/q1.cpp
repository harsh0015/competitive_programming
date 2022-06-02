#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin>>t;
	while(t--){

		int n;cin >>n;

		int arr[n];

		for(int i=0;i<n;i++)cin>>arr[i];

		bool flag1=true,flag2=true;

	for(int i=0;i<n-1;i++){
		if(arr[i]>arr[i+1])flag2=false;
		if(arr[i]<arr[i+1])flag1=false;
	}

	 if(flag1 || flag2){
	 	cout <<0<<endl;
	 	continue;
	 }

		int x=n-1;

	while(x>=0 && arr[x]<=arr[x-1])x--;
	while(x>=0 && arr[x]>=arr[x-1])x--;

	cout <<x<<endl;
	}
}