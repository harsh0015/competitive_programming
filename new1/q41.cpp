#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
void pairsort(ll a[], ll b[], ll n) 
{ 
    pair<ll, ll> pairt[n]; 
  
    
    for (ll i = 0; i < n; i++)  
    { 
        pairt[i].first = a[i]; 
        pairt[i].second = b[i]; 
    } 
  
    
    sort(pairt, pairt + n); 
      
    
    for (ll i = 0; i < n; i++)  
    { 
        a[i] = pairt[i].first; 
        b[i] = pairt[i].second; 
    } 
} 


int main(){
	ll t;cin >>t;

	while(t--){
		ll n;cin >>n;

		ll arr1[n];
		ll arr2[n];

		for(ll i=0;i<n;i++)
			cin >>arr1[i];

		for(ll i=0;i<n;i++)
			cin >>arr2[i];
     
     pairsort(arr1, arr2, n); 

     
     ll arr3[n];

     arr3[0]=arr2[0];

     for(ll i=1;i<n;i++)
     	arr3[i]=arr2[i]+arr3[i-1];
    
     ll maxi=min(arr3[n-1],arr1[n-1]);

     
     for(ll i=n-1;i>=0;i--){
     	ll sum;

     	sum=arr3[n-1]-arr3[i];

     	ll c=max(sum,arr1[i]);
     	if(c<maxi)
     		maxi=c;
     }

  cout <<maxi<<endl;

	}
}