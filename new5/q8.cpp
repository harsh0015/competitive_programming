#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main() {
	
	ll t;cin>>t;
	while(t--){
	    ll a,b;cin>>a>>b;

	    if(gcd(a,b)>1)cout <<"YES"<<endl;
	    else cout <<"NO"<<endl;
	   
	    
	}
}
