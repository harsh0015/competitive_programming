#include<bits/stdc++.h>
using namespace std;

char rev(char c){
	if(c=='R')return 'P';
	else if(c=='P') return 'S';
	else return 'R';
}

int main(){

	int t;cin >>t;

	while(t--){

		string s;cin >>s;
        string ans="";

        for(int i=0;i<s.length();i++)
        	ans=ans+rev(s[i]);


        cout <<ans<<endl;

	}
}