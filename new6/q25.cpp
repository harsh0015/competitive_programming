#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin>>t;

	while(t--){

		int n,k;cin>>n>>k;

		string s;cin>>s;

		int arr[s.length()+1];

		for(int i=0;i<n;i++){
       if(s[i]=='1')arr[i+1]=1;
       else arr[i+1]=0;
		}


		int dis=0;

		for(int i=0;i<s.length()-1;i++){
			if(s[i]==s[i+1])dis=dis+2;
			else dis=dis+1;
		}

		while(k--){
          int i;cin>>i;

          if(n==1){
          	cout <<0<<endl;
          	continue;
          }

          if(i==1){
             if(arr[1]==arr[2]){
             	dis=dis-1;
             	if(arr[1]==1)arr[1]=0;
             	else arr[1]=1;
             }
            else{
            	dis=dis+1;
            	if(arr[1]==1)arr[1]=0;
             	else arr[1]=1;
            }
          }

          else if(i==n){
          	if(arr[n]==arr[n-1]){
             	dis=dis-1;
             	if(arr[n]==1)arr[n]=0;
             	else arr[n]=1;
             }
            else{
            	dis=dis+1;
            	if(arr[n]==1)arr[n]=0;
             	else arr[n]=1;
            }
          }
          else{
          	if(arr[i]==arr[i+1]){
             	dis=dis-1;
             	
             }
            else{
            	dis=dis+1;
            
            }


            if(arr[i]==arr[i-1]){
             	dis=dis-1;
             	
             }
            else{
            	dis=dis+1;
            	
            }

            if(arr[i]==1)arr[i]=0;
             	else arr[i]=1;
          }
          cout <<dis<<endl;

		}

		

	}
}