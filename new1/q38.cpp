#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){

	ll t;cin >>t;

	while(t--){

		ll n,m;
		cin >>n>>m;

		ll arrn[n+1];
		ll arrm[m+1];

		for(ll i=1;i<n+1;i++)
			cin >>arrn[i];

		for(ll i=1;i<m+1;i++)
			cin >>arrm[i];

		ll a=1;
		ll b=1;

		 sort(arrn+1,arrn+n+1);
		 reverse(arrn+1,arrn+n+1);
      ll sum=0;
		while(a<=n)
		{
			if(arrn[a]>=b){
             if((arrm[b]<arrm[arrn[a]])&&b<=m){
              sum=sum+arrm[b];
              b++;
             }
             else sum=sum+arrm[arrn[a]];
			}
			else{
				sum=sum+arrm[arrn[a]];
			}
			a++;

		}

   cout <<sum<<endl;


   
	}
}

