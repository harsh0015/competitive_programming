#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

	int t;cin >>t;

	while(t--){

		ll n,a,b;
		cin >>n>>a>>b;

		ll sum1=0,sum2=0;

		while(n--){
			string s;cin >>s;

		bool flag=false;

		string s1="EQUINOX";

		for(ll i=0;i<s1.length();i++){
			if(s1[i]==s[0]){flag=true;break;}
		}
  // cout <<flag<<endl;
		if(flag)sum1=sum1+a;
		else sum2=sum2+b;
		}
  // cout <<sum1<<" "<<sum2<<endl;
    if(sum1>sum2)cout <<"SARTHAK"<<endl;
    else if(sum2>sum1)cout<<"ANURADHA" <<endl;
    else cout <<"DRAW"<<endl;
	}
}