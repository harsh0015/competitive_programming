#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int t;cin>>t;
   
    while(t--){


    	int n;cin>>n;

    	int arr[n];

    	for(int i=0;i<n;i++)cin>>arr[i];


    	unordered_map<int,int>m;

    int k=INT_MIN;

    int ma=INT_MIN;

    int y=0;

        for(int i=0;i<n;i++){
        	m[arr[i]]++;

        	ma=max(ma,arr[i]);

        	y=max(y,m[arr[i]]);

          if(m[arr[i]]==2){
          	k=max(k,arr[i]);
          }
        }

        // cout <<k<<"*"<<ma<<endl;
        if(n!=k+ma || y!=2){
        	cout <<0<<endl;
        	continue;
        }

        bool flag1=true,flag2=true;

        bool f1[k+1],f2[k+1];

        for(int i=1;i<k+1;i++){
        	f1[i]=false;
        	f2[i]=false;
        }

        for(int i=0;i<k;i++){
        	f1[arr[i]]=true;
        }

        for(int i=n-1;i>=n-k;i--){
        	if(arr[i]<=k){
        		f2[arr[i]]=true;
        	}
        	
        }

        for(int i=1;i<k+1;i++){
        	if(!f1[i]){
        		flag1=false;
        		break;
        	}
        }

        for(int i=k;i>=1;i--){
        	if(!f2[i]){
        		flag2=false;
        		break;
        	}
        }

        if(flag1 && flag2){
        	cout <<2<<endl;
        	cout <<k<<" "<<ma<<endl;
        	cout <<ma<<" "<<k<<endl;
        }
        else if(flag1){
        	cout <<1<<endl;
        	cout <<k<<" "<<ma<<endl;
        }
        else if(flag2){
        	cout <<1<<endl;
        	cout <<ma<<" "<<k<<endl;
        }
        else{
        	cout <<0<<endl;
        }
    }
	
}