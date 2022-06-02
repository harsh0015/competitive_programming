#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){

	int t;cin >>t;

	while(t--){

		ll n;cin >>n;

		ll arr[n];

		for(ll i=0;i<n;i++){
			cin >>arr[i];
		}

		sort(arr,arr+n);

		ll count=0;
		bool flag=false;

		for(ll i=0;i<n;i++){

			if(i+1-arr[i]<0){
				flag=true;
				break;
			}
			count=count+i+1-arr[i];
		}


       if(flag){
       	cout <<"Second"<<endl;
       	continue;
       }
		if(count<=0){
			cout <<"Second"<<endl;
		}

		else {
			if(count%2==0)cout <<"Second"<<endl;
			else cout <<"First"<<endl;
		}
	}
}