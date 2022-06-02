#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k;cin >>n>>k;

		string s;cin >>s;

		int count=0;

		bool flag=true;
		int start,last;

		for(int i=0;i<s.length();i++){
             if(s[i]=='*' && flag){
             	start=i;
             	flag=false;

             }
             if(s[i]=='*')last=i;
		}
         
         if(start==last){
         	cout <<1<<endl;
         	continue;
         }
         if(last-start<=k){
         	cout <<2<<endl;
         	continue;
         }
         else count=2;

		
		

		for(int i=start;i<=last;i++){
			int j;
			if(i+k<last){
           for( j=start+k;j>start;j--){
             if(s[j]=='*'){
             	count++;
             	break;
             }
           }

           
           i=j-1;}
           else break;
		}
cout <<count<<endl;
	}
}