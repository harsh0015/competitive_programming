#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;
		int arr[n];
		for(int i=0;i<n;i++)cin >>arr[i];


		vector<int >v;

	for(int i=1;i<n-1;i++){
       if((arr[i-1]<arr[i+1])&&(arr[i]<=arr[i-1] || arr[i]>=arr[i+1]))v.push_back(i);
	}
	}
}