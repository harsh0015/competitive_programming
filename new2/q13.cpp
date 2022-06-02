#include<bits/stdc++.h>
using namespace std;

int main(){

	int a,b;cin >>a>>b;

	int s1=0;
	int s2=0;

	while(a>0){
		s1=s1+a%10;

		a=a/10;
	}

	while(b>0){
		s2=s2+b%10;

		b=b/10;
	}


	if(s1>=s2){cout <<s1;}
	else cout <<s2;
}