#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n];

		for(int i=0;i<n;i++)cin >>arr[i];

		int arr1[101];

	for(int i=0;i<101;i++)arr1[i]=0;

	for(int i=0;i<n;i++){
		 arr1[arr[i]]++;
	}

	int count=0;

	while(count!=n){
		for(int i=0;i<101;i++){
			if(arr1[i]!=0){
				cout <<i<<" ";
				arr1[i]--;
				count++;
			}
		}
	}

	cout<<endl;
	}
}