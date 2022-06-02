#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin>>t;

	while(t--){
		int n,k;cin>>n>>k;

		int arr[n];
		
		int counto=0,counte=0;

		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%2==0)counte++;
			else counto++;
		}

		if(counto==0){
			cout <<"No"<<endl;
		}
		else if(counte==0){
            
            if(k%2==0)cout <<"No"<<endl;
            else cout <<"Yes"<<endl;
		}
		else if(k==n){
			if((k-counte)%2==0)cout <<"No"<<endl;
			else cout <<"Yes"<<endl;
		}
		else{
			
			cout <<"Yes"<<endl;
		}


	}
}