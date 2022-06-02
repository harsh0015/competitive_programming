#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;

		cin >>n;

		int arr[2*n];

		for(int i=0;i<2*n;i++)cin >>arr[i];

		bool arr1[n];

	for(int i=0;i<n;i++)arr1[i]=true;

		for(int i=0;i<2*n;i++){
			if(arr1[arr[i]-1]){
				cout <<arr[i]<<" ";
				arr1[arr[i]-1]=false;
			}
		}

		cout <<endl;
	}
}