#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll min(ll a ,ll b){
	if(a<b)return a;
	else return b;
}

int main(){

	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;

		ll arr[n];

		for(ll i=0;i<n;i++)cin >>arr[i];

			ll count=0;

		ll i,j;

		for( i=0;i<n;i++){
			if(arr[i]>arr[i+1]){
				bool flag=false;
				for( j=i+1;j<n;j++){
					if(arr[j]>arr[i]){
                       flag=true;
                       break;
					}
				}

				if(flag){
					ll m=100000000000;
					for(ll k=i+1;k<j;k++){
						m=min(m,arr[k]);
					}
					if(m!=100000000000){
					count=count+arr[i]-m;
					}
				
					i=j-1;
					continue;
				}
				else{
				
					ll m=100000000000;
					for(ll k=i+1;k<n;k++){
						m=min(m,arr[k]);
					}
					if(m!=100000000000){
					count=count+arr[i]-m;
					}
					break;
				}
			}
		}

		cout <<count<<endl;
	}
}