#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

	ll t;cin>>t;


	while(t--){
		ll n;cin>>n;

		ll arr[n];

		for(int i=0;i<n;i++)cin>>arr[i];

		bool flag=false;
         int x=-1,y=-1;
		for(int i=0;i<n-1;i++){
           if(abs(arr[i]-arr[i+1])>=2){
           	x=i;y=i+1;
           	flag=true;
           	break;
           }
		}
     
     if(flag){
     	cout <<"YES"<<endl;
     	cout <<x+1<<" "<<y+1<<endl;
     }

     else cout <<"NO"<<endl;
	}
}