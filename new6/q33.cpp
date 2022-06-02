#include<bits/stdc++.h>
using namespace std;
vector<int>v;



int main(){

	int t;cin>>t;



	while(t--){

		int n;cin>>n;

		int b=n%11;

		int x=n-111*b;

		if(x%11==0 && x>=0)cout <<"YES"<<endl;
		else cout <<"NO"<<endl;


	}
}