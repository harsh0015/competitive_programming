#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	if(a==0)
	return b;

else return gcd(b%a,a);
}

int main(){
	int t;cin >>t;

	while(t--){
		int k;cin >>k;
         
         int g=gcd(100,k);

         cout <<100/g<<endl;

	}
}