#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isprime(ll n){
if(n==2||n==3||n==5)
	return true;

for(ll i=2;i*i<=n;i++)
	if(n%i==0)
		return false;

return true;
}



int main(){

	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;

		ll ans=1;

		int last=1+n;

		int count =0;

		while(count <2){
         if(isprime(last)){
         	ans=ans*last;
         	last=last+n;
         	count ++;
         	continue;
         }
         last++;
		}

		cout <<ans<<endl;
	}
}