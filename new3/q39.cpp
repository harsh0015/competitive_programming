#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,p,k;

		cin >>n>>p>>k;

		string s;cin >>s;

		int x,y;cin >>x>>y;

		int cost=INT_MAX;

		for(int i=0;i<s.length()-p;i++){

			int c=0;
              for(int j=p-1;j<s.length();j=j+k){
              	if(s[j]!='1')c=c+y;
              }

             c=c+x*i;

             if(c<cost)cost=c;
		}
	}
}