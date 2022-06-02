#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;
	while(t--){

		int x,y;cin >>x>>y;

		string s;cin >>s;

		int u=0,d=0,r=0,l=0;

		for(int i=0;i<s.length();i++){
			if(s[i]=='U')u++;
			if(s[i]=='D')d++;
			if(s[i]=='R')r++;
			if(s[i]=='L')l++;
		}
  //    cout <<r<<" "<<l<<" "<<u<<" "<<d<<endl;
		bool flag1=false,flag2=false;

		if(x>=-1*l && x<=r)flag1=true;

		if(y>=-1*d && y<=u)flag2=true;

		// cout <<flag1<<flag2;

		if(flag1 && flag2)cout <<"YES"<<endl;
		else cout <<"NO"<<endl;


	}
}