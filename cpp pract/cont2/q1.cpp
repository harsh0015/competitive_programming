#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >>t;

	while(t--){


		int n,k;
		cin >>n>>k;

		string ans="";
		for(int i=1;i<=n;i++)
		{
			if(i%3==0)
				ans=ans+"c";
			if(i%3==1)
				ans=ans+"a";
			if(i%3==2)
				ans=ans+"b";
		}
		cout <<ans<<endl;
	}
}