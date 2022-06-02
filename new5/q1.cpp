#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
ll t;cin >>t;

	while(t--){
		ll n;cin >>n;

		ll x=n/4;
		ll ans=0;

		ans=ans+x*(6+5)*4;

		ll y=n%4;

		if(y==0){
			ans=ans+4*4;
			cout <<ans<<endl;
			continue;
		}
		else {
			if(x==0){
				if(y==1)ans=ans+20;
				else if(y==2)ans=ans+2*18;
				else if(y==3)ans=ans+15+2*18;
			}
			else{
				if(y==1)ans=ans+20 +3*4;
				else if(y==2)ans=ans+2*18 +2*4;
				else if(y==3)ans=ans+15+2*18 +1*4;
			}

			cout <<ans<<endl;
		}


	}
}