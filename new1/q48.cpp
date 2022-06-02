#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >>t;

	while(t--){

		int n;cin>>n;

		int a,b;

		for(int i=0;i<n;i++){
			if(i==0)cin >>a;
			else if(i==n-1)cin >>b;
			else{
				int x;cin >>x;
			}
		}


		if(a<b)cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
}