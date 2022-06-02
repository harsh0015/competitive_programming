#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;
		cin >>n;

		string s;cin >>s;

		string s2="";

		s2=s2+"1";

		for(int i=1;i<n;i++){
			if(s[i-1]-'0'+s2[i-1]-'0'!=s[i]-'0'+1){
				s2=s2+"1";
				continue;
			}
			s2=s2+"0";
		}

		cout <<s2<<endl;
	}
}