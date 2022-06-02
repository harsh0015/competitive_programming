#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k;cin >>n>>k;
     
     vector<int >v;
     int s=min(k,int(sqrt(n)));
     for(int i=1;i<=s;i++){
     	if(n%i==0){
     		v.push_back(i);

     		if(n/i !=i)v.push_back(n/i);
     	}
     }

     sort(v.begin(),v.end());
    int ans;
     for(int i=v.size()-1;i>=0;i--){
    if(v[i]<=k){
    	ans=v[i];
    	break;
     }
    }
   
   cout <<ans<<endl;
	}
}
