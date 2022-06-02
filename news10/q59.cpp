#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ceel(x, y) ((x) / (y) + !((x) % (y) == 0))
#define ff first
#define ss second
#define endl '\n'
#define print(v) for(auto x : v) cout << x << ' '; cout << endl;
#define debug(v) cout << #v << " = "; print(v);
#define printmp(v) for(auto x : v) cout << x.first << ' ' << x.second << endl; cout << endl;
using namespace std;
typedef long long int ll;
typedef long double ld;


 
void solve(){

    ll n,k;cin>>n>>k;

    ll arr[n];

    for(ll i=0;i<n;i++)cin>>arr[i];

    sort(arr,arr+n);
    
    ll i=n/2;

    ll j=i+1;

    while(j<n){
        ll val=(arr[j]-arr[i])*(j-i);
        if(val<=k){
            k=k-val;
            arr[i]=arr[j];
        }
        else{
            ll h=k/(j-i);
            arr[i]=arr[i]+h;

            k=0;
            break;
        }
        j++;
    }

   

    if(k>0){
        ll h=k/(n/2+1);
        arr[i]=arr[i]+h;
    }

    cout <<arr[i]<<endl;
}
 
 
int main(){
    fastio;
 
    int t = 1;
   
    while(t--){
        solve();
    }
    return 0;
}