#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

	ll t;cin >>t;


	while(t--){

		ll n,k;

		cin >>n>>k;

		ll arr[n];

		for(ll i=0;i<n;i++)
			cin >>arr[i];

		bool flag=true;

		for(ll i=0;i<n;i++)
			if(arr[i]!=k)flag=false;

		if(flag){
			cout <<0<<endl;
			continue;
		}



     ll sum=0;
     for(ll i=0;i<n;i++)
     	sum=sum+k-arr[i];

     if(sum==0)
     {
     	cout <<1<<endl;
     	continue;
     }


      cout <<2<<endl;
	}
}
