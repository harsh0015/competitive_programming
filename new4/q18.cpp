#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k;cin >>n>>k;

		int arr[n];

		int count=0;

		for(int i=0;i<n;i++){cin >>arr[i];if(arr[i]==1)count++;}



		int cost=0;

	for(int i=0;i<k;i++)cost=cost+arr[i];

		





	for(int i=1;i<=n-k;i++){
       cost=min(cost,cost-arr[i-1]+arr[i+k-1]);
	}
count=count-cost;
	cost=((cost)*(cost+1))/2;

	cout <<cost+count<<endl;
	}
}