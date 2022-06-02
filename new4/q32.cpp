#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

	ll t;cin >>t;

	while(t--){

		ll n,a,b;cin >>n>>a>>b;



		string s;cin >>s;

		bool flag=true;

		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				flag=false;
				break;
			}
		}
   if(flag){
   	cout <<n*a+(n+1)*b<<endl;
   	continue;
   }
		vector<ll >v;

		string s1="";

		for(ll i=0;i<s.size();i++){
			if(s[i]=='1')s1=s1+"1";
			if(s[i]=='0'){
				if(i==0 || i==n-1)s1=s1+"0";
				else if(s[i-1]=='1'&& s[i+1]=='1')s1=s1+"1";
				else s1=s1+"0";

			}
		}

		for(ll i=0;i<n-1;i++){
			if(s1[i]!=s1[i+1])v.push_back(i);
		}

		// for(int i=0;i<v.size();i++)cout <<v[i]<<" ";

			// cout <<endl;

			ll cost=0;

		cost=cost+(n+1)*b+ (n+2)*a;

		// cout <<"*"<<cost<<endl;
		// cout <<"%"<<cost<<"%"<<endl;

		// char last=s1[0];
		// cout <<s1<<endl;

		ll len=0;

		for(ll i=1;i<n;i++){
			if(s[i]=='1')len++;
			if(s[i]=='0'){
				// cout <<len<<endl;
				if(len!=0){
				cost=cost+(len+1)*b;
				len=0;}
			}
		}

		// cout <<"%"<<cost<<"%"<<endl;
for(ll i=0;i<v.size()-1;i++){
	if(i==0 || i==n-1)continue;

	cost=cost +min((v[i+1]-v[i]-1)*b,2*a);

	i++;
}


cout<<cost<<endl;
	}
}