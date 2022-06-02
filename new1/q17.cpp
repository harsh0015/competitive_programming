#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

	ll  t;
	cin >>t;

	while(t--){

		ll n;cin >>n;

		ll arr[n+1];

		for(ll i=1;i<n+1;i++){
			cin >>arr[i];
		}

		ll pos=0; ll neg=0;
          ll sum=0;
         for(ll i=1;i<n+1;i++){
             
            if(arr[i]>0){
            	if(pos==0)
            		pos=arr[i];
                else{
                	if(arr[i]>pos)
                		pos=arr[i];
                }

                if(neg!=0){
                	sum=sum+neg;
                	neg=0;
                }

            }

            if(arr[i]<0){
            	if(neg==0)
            		neg=arr[i];
                else{
                	if(arr[i]>neg){
                	 neg=arr[i];

                	}
                }

                if(pos!=0){
                	sum=sum+pos;
                	pos=0;
                }
            }
         }
           if(pos!=0)
           	sum=sum+pos;

           if(neg!=0)
           	sum=sum+neg;
         cout <<sum<<endl;

	}


}