#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}




int main(){

	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;
		n--;
		bool flag=true;
		while(flag){
			n++;

	 ll sum=0;

		ll x=n;

	while(x!=0){
		sum=sum+x%10;
		x=x/10;
	}

	if(gcd(sum,n)>1){
		cout <<n<<endl;
flag=false;
break;
	}

}

	}
}