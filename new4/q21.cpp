#include<bits/stdc++.h>
using namespace std;

int main(){

	int t ;cin >>t;

	while(t--){

		string s;cin >>s;

		bool flag=true;
           int i;
		for( i=s.length()-1;i>=1;i--){
			if(s[i]=='0'&&s[i-1]=='0'){flag=false;break;}
		}

		if(flag){
			cout <<"YES"<<endl;
			continue;
		}

		else{

			bool flag1=true;
			for(int j=i-2;j>=1;j--){
				if(s[j]=='1'&&s[j-1]=='1'){flag1=false;break;}
			}

			if(flag1)cout <<"YES"<<endl;
			else cout <<"NO"<<endl;
		}
	}
}