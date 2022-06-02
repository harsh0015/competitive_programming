#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;//998244353;
typedef long long int ll;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,ans=0;
        cin>>n;
        ll mn=INT_MAX;
        ll minn=INT_MAX-1;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<=0){
                ans++;
            }
            else{
                mn=min(mn,arr[i]);
            }
        }
        sort(arr,arr+n);
        for(ll i=0;i<n;i++){
            if(i<n-1 && arr[i]<=0){
                minn=min(minn,arr[i+1]-arr[i]);
            }
        }
        if(minn>=mn){
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}