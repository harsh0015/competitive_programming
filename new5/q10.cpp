#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k;cin >>n>>k;

		int arr[n];
		for(int i=0;i<n;i++)cin >>arr[i];

			for(int i=0;i<n-1;i++){
				if(arr[i]<=k){
					arr[n-1]=arr[n-1]+arr[i];
					k=k-arr[i];
					arr[i]=0;
				}
				else{
					arr[n-1]=arr[n-1]+k;
					
					arr[i]=arr[i]-k;
					break;
				}
			}
for(int i=0;i<n;i++)cout <<arr[i]<<" ";

	cout <<endl;


	}
}