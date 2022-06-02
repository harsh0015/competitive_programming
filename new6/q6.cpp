#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,k;cin>>n>>k;

	int arr[n];
	int sum=0;

	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum=sum+arr[i];
	}

	if(sum<k){
		cout <<-1;
		return 0;
	}

	sort(arr,arr+n);

	int i=n-1;

	while(i>0){
		if(arr[i]>arr[i-1]){
			
		}
	}



}