#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;
		int arr[n];
		for(int i=0;i<n;i++)cin >>arr[i];

		int dp[n][n];

	int count=0;

	for(int i=0;i<n;i++)dp[i][i]=0;

	for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			dp[i][i+1]=1;
			

		}
		else dp[i][i+1]=0;
	}

	for(int i=2;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(arr[j]==arr[i+j]){
				dp[j][j+i]=1+dp[j+1][j+i]+dp[j][j+i-1];
				
				
			}
			else{
				dp[j][j+i]=dp[j+1][j+i]+dp[j][j+i-1];

			}
		}
	}
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if(i<=j)count=count+dp[i][j];
    	}
    	
    }

	cout <<count<<endl;

	}
}