#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main(){
	ll t;
	cin >>t;

	while(t--){


		ll n;

		cin >>n;
		if(n==1)
		{
			cout<<0<<endl;
			continue;
		}
         ll check;
         ll ans;
         ans=n;
		for(ll i=1;i<n;i++){
			if((n-i)%i==0){
				check=(n-i)/i+i-1;
				if(check<=ans)
					ans=check;

				else break;
			}
			else{
				check=(n-i)/i+i;
				if(check<=ans)
					ans=check;

				else break;
			}
			
		}
		cout <<ans<<endl;
	}
}