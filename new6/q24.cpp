#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){
		int a,b,c,d,k;
		cin>>a>>b>>c>>d>>k;

		int dis=abs(a-c)+abs(b-d);

		bool flag=false;

		int h=k-dis;

		if(h%2==0 && h>=0)cout <<"YES"<<endl;
		else cout<<"NO"<<endl;

		
		
	}
}