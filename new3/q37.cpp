#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ll;

ll bintoint(string s){

	ll ans=0;

	for(ll i=0;i<s.length();i++){
		if(s[s.size()-1-i]=='1'){
			ans=ans+pow(2,i);
		}
	}

	return ans;
}

string binary(ll n){
	string s="";

	while(n!=0){
		ll x=n%2;
		n=n/2;

		// stringstream ss;

		//  ss<<x;  
  // string s1;  
  // ss>>s1; 

  s=to_string(x)+s;
	}

	return s;
}

int main(){

	ll t;cin >>t;

	while(t--){

		ll n;

		cin >>n;

		string s=binary(n);

		string s1="",s2="";

		bool flag=false;

		for(ll i=0;i<s.length();i++){
            if(s[i]=='0'){
            	s1=s1+"1";
            	s2=s2+"1";
            	continue;
            }

            if(!flag && s[i]=='1'){
            	s1=s1+"1";
            	s2=s2+"0";
            	flag=true;
                 continue;
            }

            s1=s1+"0";
            s2=s2+"1";
		}


		ll a=bintoint(s1);
		ll b=bintoint(s2);

		cout <<a*b<<endl;
	}
}