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

    ll n,h;cin>>n>>h;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    if(n==1){
        if(h%arr[0]==0){
            cout <<h/arr[0]<<endl;
            return;
        }
        else cout <<h/arr[0] + 1<<endl;

        return;
    }


    ll a=arr[n-1];
    ll b=arr[n-2];

    if(h%(a+b)==0){
        cout <<2*(h/(a+b))<<endl;
    }
    else{
        ll x=2*(h/(a+b));
        ll y=h%(a+b);
        if(y>a){
            x=x+2;
        }
        else{
            x++;
        }
        cout <<x<<endl;
        return;
    }


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