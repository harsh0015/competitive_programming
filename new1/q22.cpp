#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll prime(ll n){

	for(ll i=2;i*i<=n;i++){
		if(n%i==0)
			return i;
	}
	return -1;
}

int main(){

	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;
         
         if(prime(n)==-1)
         	cout << 1<< endl<<n<<endl;

         else{
         	// cout <<n<<"$"<<endl;

         	ll a=0;
         	ll b=0;
         	ll c=n;
         	ll d=0;

         	for(ll i=2;i*i<=n;i++){
         		ll count=0;
         		if(n%i==0){
         			while(c%i==0 && (c/i)%i==0){
         				count ++;
                         c=c/i;
         			}
         		}
         		if(count >a){ a=count;b=i;d=c;}

         		c=n;
         	}

            cout <<a+1<<endl;

            for(ll i=1;i<a+1;i++) cout<<b<<" ";
            
            if(d!=0)
            cout <<d<<endl;

        else cout << n<<endl;
         }

	}
}