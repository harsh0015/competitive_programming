#include<bits/stdc++.h>
using namespace std;

int main(){


	int t;cin >>t;

	while(t--){

		string s;cin >>s;

		char c1=s[0];
		char c2=s[s.length()-1];

		char c3='D';

		for(int i=0;i<s.length();i++){
			if(s[i]!=c1 && s[i]!=c2){
				c3=s[i];
				break;
			}
		}

		int count1=0;
		int count2=0;

		for(int i=0;i<s.length();i++){

            

			if(s[i]==c1)count1++;
			if(s[i]==c2)count1--;
			if(s[i]==c3)count2++;
		}


		if(count1>0){
			int count=0;
			bool flag=false;

			for(int i=0;i<s.length();i++){

				if(count <0){
					flag=true ;
					break;
				}
				if(s[i]==c1)count++;
				else count--;
			}

			if(count !=0)flag=true;

			if(!flag)cout <<"YES"<<endl;
			else cout <<"NO"<<endl;
		}



			else if(count1<0){
			int count=0;
			bool flag=false;

			for(int i=0;i<s.length();i++){

				if(count <0){
					flag=true ;
					break;
				}
				if(s[i]==c2)count--;
				else count++;
			}

			if(count !=0)flag=true;

			if(!flag)cout <<"YES"<<endl;
			else cout <<"NO"<<endl;
		}

		else {
			if(count2==0)cout <<"YES"<<endl;
			else cout <<"NO"<<endl;
		}

	}
}