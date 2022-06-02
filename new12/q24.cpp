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

    ll n;cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back({x,i});
    }
    
    ll l=-1;
    ll r=1;
    ll count=0;
    vector<ll>ans(n);

    sort(v.begin(), v.end());


    for(ll i=n-1;i>=0;i--){
        if(i!=0){
            ans[v[i].second]=l;
            ans[v[i-1].second]=r;


            count=count+ (2*v[i].first*abs(l)) +(2*v[i-1].first*abs(r));
            r++;
            l--;
            i--;
        }
        else{
            ans[v[i].second]=r;
             count=count +2*v[i].first*abs(r);
            break;
        }
    }


   cout <<count<<endl;
   cout <<0<<" ";
   for(int i=0;i<n;i++)cout <<ans[i]<<" ";
    cout <<endl;



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