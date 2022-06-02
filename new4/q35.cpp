#include<bits/stdc++.h>
using namespace std;
 
vector<int> fact (int n){
 
	vector<int> v;
 
	for(int i=1;i*i<=n;i++){
     if(n%i==0){
     	if(i%2==1 && i!=1)v.push_back(i);
 
     	if(n/i!=i)
     		if(n/i % 2==1)
     			v.push_back(n/i);
     }
	}
	return v;
 
}
 
int main(){
 
	int t;cin >>t;
 
 
 
	while(t--){
 
		int n;cin >>n;
 
		int dp[n+1];
		dp[1]=2;
		if(n>1)
		 dp[2]=1;
 
		if(n>2)
		 dp[3]=1;
		if(n> 3)
		 dp[4]=2;
 
		
 
 
		for(int i=5;i<n+1;i++){
 
           vector<int> v=fact(i);
 
           int maxi=0;
          // cout <<v[0]<<"$"<<endl;
 
           for(int j=0;j<v.size();j++){
           	if(dp[i/v[j]]>maxi)
           	 maxi=dp[i/v[j]];
           }
 
 
 
           if(max(dp[i-1],maxi)==2){
           	dp[i]=1;}
           else dp[i]=2;
		}
 
		if(dp[n]==1)
			cout <<"Ashishgup"<<endl;
		else cout <<"FastestFinger"<<endl;
	}
}