#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin>>t;

	while(t--){

		string s;cin>>s;
		int n=s.length();

		int count1=0,count2=0;

		for(int i=0;i<n;i++){
			if(s[i]=='1')count1++;
			else count2++;
		}

		if(count1 ==0 ||count2==0){
			cout <<0<<endl;
			continue;
		}

		
		int mcounter1=INT_MAX;


		for(int i=0;i<=n;i++){
			int counter1=0;
			for(int j=0;j<n;j++){
				 if(j<i){
				 	if(s[j]=='0')counter1++;
				 }
				 else{
				 	if(s[j]=='1')counter1++;
				 }
			}
			mcounter1=min(mcounter1,counter1);
			counter1=0;
		}

		
		int mcounter2=INT_MAX;

		for(int i=0;i<=n;i++){
			int counter2=0;
			for(int j=0;j<n;j++){
				 if(j<i){
				 	if(s[j]=='1')counter2++;
				 }
				 else{
				 	if(s[j]=='0')counter2++;
				 }
			}
			mcounter2=min(mcounter2,counter2);
			counter2=0;
		}

cout <<min(mcounter1,mcounter2)<<endl;

	}
}