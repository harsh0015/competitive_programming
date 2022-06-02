#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;



int main(){

	ll t;cin >>t;

	while(t--){

		ll a,b;cin >>a>>b;


		ll count=0;
		for(ll i=a;i<=b;i++){
			
			if(i>b-i)break;

             count=count+ b-2*i+1;
		}
      count=2*count;

      if(count==0){
      	cout <<0<<endl;
      	continue;
      }

		for(int i=a;i<=b;i++){
			if(2*i<=b)count --;

			else break;
		}

		cout <<count<<endl;
	}
}