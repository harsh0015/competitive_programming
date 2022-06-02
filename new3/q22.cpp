#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

	int t;cin >>t;

	while(t--){

		ll a,b,c;
		cin >>a>>b>>c;

		if(a==b && b==c){
			cout <<"YES"<<endl;
			cout <<a<<" "<<b<<" "<<c<<" "<<endl;
			continue;
		}

		ll m=max(a,max(b,c));

		ll count=0;

		if(a==m)count++;
		if(b==m)count++;
		if(c==m)count++;

		if(count<2){
			cout <<"NO"<<endl;
		}

		else{
			cout <<"YES"<<endl;

		ll x;

		if(a!=m)x=a;
		if(b!=m)x=b;
		if(c!=m)x=c;

			cout <<m<<" "<<x<<" "<<x<<" "<<endl;
		}
	}
}