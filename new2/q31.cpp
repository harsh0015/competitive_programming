#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;



int main(){


	ll t;cin >>t;

	while(t--){
		ll n,k;
		cin >>n>>k;


		ll arr[n+1];

		for(ll i=1;i<n+1;i++)cin >>arr[i];

		ll ak[10000+1];

	if(n==1){
			cout <<-1<<endl;
			continue;
		}


	bool flag=false;

	for(ll i=1;i<=k;i++){
      ll j;
      if(flag ) break;

      for(j=1;j<n;j++){
      	if(arr[j]<arr[j+1]){
      		arr[j]++;
      		break;
      	}
      	if(j==n-1)
      	{
      		flag=true;
      	}


      }
      if(!flag)ak[i]=j;
      else break;
	}


  // for(int i=1;i<n+1;i++)cout <<arr[i]<<' ';
	if(flag )cout <<-1<<endl;

	else cout <<ak[k]<<endl;
	}
}