#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin>>t;

	while(t--){

		int n;cin>>n;

		string s;cin>>s;

		string ans="";
		int i;
		for( i=0;i<n;i++){
			if(s[i]=='1')break;
			else ans=ans+s[i];
		}

		int j=-1;

		for( j=n-1;j>=0;j--){
			if(s[j]=='0')break;
		}
		// cout <<i<<" "<<j<<endl;

		if(i<j){
			// cout <<"YE"<<endl;
			for(int k=j;k<n;k++)
				ans=ans+s[k];
		}
		else ans=s;

		cout <<ans<<endl;


	}
}