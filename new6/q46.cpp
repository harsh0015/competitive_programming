#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;cin>>n;

    ll arr[n];

    for(ll i=0;i<n;i++){
    	cin>>arr[i];
    }

    multiset<ll>st;

    ll h=0;
    ll count=0;

    for(ll i=0;i<n;i++){
    	if(arr[i]>=0){
    		h=h+arr[i];
    		count++;
    		st.insert(arr[i]);
    	}

    	else{
    		if(arr[i]+h>=0){
    			h=arr[i]+h;
    			count++;
    			st.insert(arr[i]);
    		}
    		else{
    			if(count==0){
    				continue;
    			}
    		  auto itr=st.begin();

    		  ll a=*itr;
    		
    		  if(a<arr[i]){
    		  	 h=h-a;
    		  	 h=h+arr[i];
    		  st.erase(itr);
    		  st.insert(arr[i]);
    		  }
    		 
    		}

    	}
    }

    cout <<count;
	
}