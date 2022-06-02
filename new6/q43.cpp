#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        ll arr1[n];

        for(ll i=0;i<n;i++)cin>>arr1[i];

            sort(arr1,arr1+n);

        ll arr2[k];

    for(ll i=0;i<k;i++)cin>>arr2[i];
        sort(arr2,arr2+k);


         ll ans=0;
       ll i=0;
       ll j=n-1;
       ll r=n-1-k;

       while(i<k){
        ll mi=10000000000;
        ll ma=-10000000000;

        ll x=arr2[i];
        ll count=0;
        while(x--){
            count++;
            if(count==1){
            mi=min(mi,arr1[j]);
            ma=max(ma,arr1[j]);
               j--;
          }
          else{
             mi=min(mi,arr1[r]);
            ma=max(ma,arr1[r]);
            r--;
          }
        
        }
        ans=ans+ma+mi;
        i++;
       }

       cout <<ans<<endl;
    }
	
}