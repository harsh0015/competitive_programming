#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;


int main(){

	ll t;cin >>t;

	while(t--){

	ll a,b,c,d;

	cin >>d>>a>>b>>c;


	ll c1=  ceil((long double)d/a);ll c2=ceil((long double)d/b); ll c3=ceil((long double)d/c);

	// cout <<c1<<" "<<c2<<" "<<c3<<endl;

   ll check=min(c1*a-d,min(c2*b-d,c3*c-d));


   cout << check<<endl;

	}

}