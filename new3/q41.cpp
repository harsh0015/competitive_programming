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

		for(int i=0;i<=(k<=s.length()-p?k:s.length()-p);i++){
              
            
			int c=0;
              for(int j=i+p-1;j<s.length();j=j+k){
              	if(s[j]!='1')c=c+x;
              }

             c=c+y*i;
              
              
//              cout <<i<<" "<<i+p-1<<" "<<c<<endl; 
             if(c<cost)cost=c;
		}
		
		cout <<cost<<endl;
	}
}

//1
//20 2 3
//10011101000101011101
