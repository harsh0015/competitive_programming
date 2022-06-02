#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n+1];

		for(int i=1;i<n+1;i++)
			cin >>arr[i];

		int dp[n+1];

		for(int i=n;i>0;i--){
			if(arr[i]+i >n)
				dp[i]=arr[i];

			else dp[i]=arr[i]+dp[arr[i]+i];
		}

		

		int max=dp[1];

		for(int i=2;i<n+1;i++)
		{
			if(dp[i]>max)
				max=dp[i];
		}

		cout <<max<<endl;
	}
}
