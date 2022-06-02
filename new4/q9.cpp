#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void k3(int n){

     if(n%2==1){
            cout <<n/2<<" "<<n/2<<" "<<1<<endl;
          
        }

        else {
            if(n/2%2==1){
                cout <<n/2-1<<" "<<n/2-1<<" "<<2<<endl;
            }
            else {
                cout <<n/2<<" "<<n/4<<" "<<n/4<<endl;
            }
        }
}
 
 void greaterk3(int n,int k){

    int y=k;

     while(k>3){
        cout <<1<<" ";
        k--;
     }
k3(n-(y-3));
 }

int main(){
 
	ll t;cin >>t;

	while(t--){
		
		ll n,k;cin >>n>>k;
         
         if(k==3)k3(n);

         else greaterk3(n,k);

	}
}