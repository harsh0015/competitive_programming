#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k,l;
		cin >>n>>k>>l;

		int w,b;cin >>w>>b;



		int r=abs(k-l);

		

		int count1=0,count2=0;

		count1= min(k,l) + r/2;

		count2=n-max(k,l)  +r/2;

		if(count1>=w && count2>=b){
			cout <<"YES"<<endl;
		}
		else cout <<"NO"<<endl;
	}
}