#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll power(ll x, ll y, ll p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main(){

ll t;cin >>t;

while(t--){

	ll n;cin >>n;
	if(n==1 || n==2){
		cout <<n<<endl;
		continue;
	}

    cout <<power(2,n-1,1000000007)<<endl;

}
}