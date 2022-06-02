#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int  main(){
	ll t;cin >>t;

	while(t--){

		ll n,k;cin >>n>>k;

		ll arr[n];

		for(ll i=0;i<n;i++)cin >>arr[i];


	    ll arr2[n];

	    for(ll i=0;i<n;i++){
	    	ll count=0;

	    	ll x=arr[i];

	    	while(x%k==0){
	    		count++;
	    		x=x/k;
	    	}

	    	arr2[i]=count;
	    }

	    ll m=arr2[0];

	    for(ll i=0;i<n;i++){
	    	if(arr2[i]<m)m=arr2[i];
	    }

	    ll x=0;

	    for(ll i=0;i<n;i++){
	    	if(arr2[i]==m){
	    		x=i;
	    		break;
	    	}
	    }

	    ll sum=0;

	    for(ll i=0;i<n;i++){
	    	if(i<x){
	    		sum=sum+arr[i]*(m+2);
	    	}
	    	else sum=sum+arr[i]*(m+1);
	    }

	    cout <<sum<<endl;

	}
}