#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll x,y,z;cin >>x>>y>>z;

	ll pr=sqrt(x*y*z);

	cout <<4*(pr/x+pr/y+pr/z);
}