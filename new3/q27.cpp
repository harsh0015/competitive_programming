#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

	int t;cin >>t;

	while(t--){

		ll n;cin >>n;

		ll arr[n];

		for(ll i=0;i<n;i++)cin >>arr[i];

		for(ll i=0;i<n;i++){
			if(arr[i]>0){
				for(ll j=i+1;j<n;j++){
					if(arr[j]<0){
						arr[j]=arr[j]+arr[i];
						arr[i]=0;
						i=j-2;
						break;
					}

					else {arr[j]=arr[j]+arr[i];arr[i]=0;i=j-1;}

					
				}

			}
		}

		// for(ll i=0;i<n;i++)cout <<arr[i]<<" ";

		// 	cout <<endl;

		ll sum=0;

	for(ll i=n-1;i>=0;i--){
		if(arr[i]<0)
			break;
		else sum=sum+arr[i];
	}

	cout <<sum<<endl;
	}
}