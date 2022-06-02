#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;

		ll arr[n+2];

		for(ll i=0;i<n+2;i++)cin>>arr[i];

			sort(arr,arr+(n+2));
		bool flag1=false;

		ll sum=arr[n+1];

		ll s=0;
		ll index=-1;
		for(ll i=0;i<n+1;i++)s=s+arr[i];
			// cout <<"sum:"<<s<<endl;

		for(ll i=0;i<n+1;i++){
			if(s-arr[i]==sum){
				flag1=true;
				index=i;
				break;
			}
		}

    ll sum2=arr[n];

    bool flag2=false;
    ll s2=0;
    for(ll i=0;i<n;i++)s2=s2+arr[i];

    if(s2==sum2)flag2=true;

if(flag1==false && flag2==false){
	cout <<-1<<endl;
	continue;
}

if(flag1){
	for(ll i=0;i<n+1;i++){
		if(i!=index){
			cout<<arr[i]<<" ";
		}
	}
	cout <<endl;
	continue;
}
if(flag2){
	for(ll i=0;i<n;i++)cout <<arr[i]<<" ";
		cout <<endl;
}

	}
}