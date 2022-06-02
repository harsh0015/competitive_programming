#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n];

		for(int i=0;i<n;i++)cin >>arr[i];

		int small[n];
	int large[n];
	small[0]=arr[0];
	large[0]=arr[0];


	for(int i=1;i<n;i++){
		if(arr[i]!=arr[i-1])
		{
			small[i]=arr[i];
			large[i]=arr[i];
		}
	}

	
	}
}