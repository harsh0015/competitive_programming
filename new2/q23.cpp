#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

	ll t;cin >>t;

	while(t--){

		ll n,k;
		cin >>n>>k;

		if(k%n==0){
           cout <<k/n<<endl;
           continue;
		}
		if(n<k){
			cout <<k/n+1<<endl;
			continue;
		}
		if(n>k){
			if(n%k==0)
				k=k*(n/k);
			else k=k*(n/k +1);

			if(k%n==0){
           cout <<k/n<<endl;
           continue;
		}
		if(n<k){
			cout <<k/n+1<<endl;
			continue;
		}
		}
	}
}