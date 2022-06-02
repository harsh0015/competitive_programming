#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){

	ll t;cin >>t;

	while(t--){
		
		ll n,k;cin >>n>>k;
     

        if(n%2==1){
        	cout <<n/2<<" "<<n/2<<" "<<1<<endl;
        	continue;
        }

        else {
        	if(n/2%2==1){
        		cout <<n/2-1<<" "<<n/2-1<<" "<<2<<endl;
        	}
        	else {
        		cout <<n/2<<" "<<n/4<<" "<<n/4<<endl;
        	}
        }

	}
}