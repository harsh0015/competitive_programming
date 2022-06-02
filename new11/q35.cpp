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

ll xorOfArray(ll arr[], ll n)
{
    // Resultant variable
    ll xor_arr = 0;
 
    // Iterating through every element in
    // the array
    for (ll i = 0; i < n; i++) {
 
        // Find XOR with the result
        xor_arr = xor_arr ^ arr[i];
    }
 
    // Return the XOR
    return xor_arr;
}
 

 bool checkXor(ll arr[],ll n, ll val){
     bool flag=false;
    ll xor_arr = 0;
 
    // Iterating through every element in
    // the array
    for (ll i = 0; i < n; i++) {
 
        // Find XOR with the result
        xor_arr = xor_arr ^ arr[i];

        if(i!=n-1 && xor_arr==val)flag=true;
    }
 
    // Return the XOR
    return flag;
 }
 
void solve(){

    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];

    for(ll i=0;i<n;i++){
        ll a,b;cin>>a>>b;
    }
    ll val=xorOfArray(arr,n);

    if(val==0){
        cout<<"YES"<<endl;
        return;
    }

    if(checkXor(arr,n,val))cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
 

    

}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
    while(t--){
        solve();
    }
    return 0;
}