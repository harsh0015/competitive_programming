#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;cin>>t;

    while(t--){
    	ll n;cin >>n;

    	ll arr[n];

    	for(ll i=0;i<n;i++){
    		cin>>arr[i];
    	}

    	ll mf=-100000000000;
    	ll count=0;
          ll i;
    	for( i=0;i<n;i++){
    		if(arr[i]>mf){
    			mf=arr[i];
    			continue;
    		}
    		else{
    			count=max(count,mf-arr[i]);
    			
    		}
    	}
    	

    	if(count==0){
    		cout <<0<<endl;
    		continue;
    	}

    	count++;

    	ll ans=1;
    	ll counter=0;
    	// cout <<"l"<<count<<endl;

    	for(ll j=1;j<1000;j++){
            if(count<=ans){
            	break;
            }
            ans=ans*2;
            counter++;
    	}

    	cout <<counter <<endl;
    }
	
}