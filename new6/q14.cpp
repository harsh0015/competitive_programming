#include<bits/stdc++.h>
using namespace std;
vector<int> dp(10001);


void pre(){

  
  for(int i=1;i<10001;i++)dp[i]=0;


   // cout <<pow(2,2)<<endl;

  for(int i=1;i<=10000;i++){
  	
  	for(int j=0;j<=15;j++){
  		cout <<pow(3,j)<<"^"<<i<<"^"<<j<<"^"<<endl;
  		if(pow(3,j)>i){
  			cout <<"cons1"<<endl;
  		}
        else if(i==pow(3,j)){
        	cout <<"*"<<i<<"%"<<endl;
        	dp[i]=1;
        	break;
        }
        else {
        	 cout <<"("<<i<<"*"<<dp[i-pow(3,j)]<<")"<<endl;
        	if(dp[i-pow(3,j)]==1){
        		cout <<"hell"<<endl;
        		dp[i]=1;
        		break;
        	}
        }

  	}
  }

}

int main(){
	pre();
	int t;cin>>t;
	

	while(t--){

		int n;cin>>n;

		for(int i=n;i<INT_MAX;i++){

			if(dp[i]){
				cout <<i<<endl;
				break;
			}
		}
	}
}