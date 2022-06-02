#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#define ff first
#define ss second
#define endl '\n'
#define print(v) for(auto x : v) cout << x << ' '; cout << endl;
#define debug(v) cout << #v << " = "; print(v);
#define printmp(v) for(auto x : v) cout << x.first << ' ' << x.second << endl; cout << endl;
using namespace std;
typedef long long int ll;
typedef long double ld;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<long long int>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
using vpll =vector<pair<ll,ll>>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)

 ll qpow(ll x,ll k){
    ll res=1;
    while(k){
        if(k&1)res=res*x%mod;
        x=x*x%mod;
        k>>=1;
    }
    return res;
}

 ll ceel(ll a,ll b){
    if(a==0)return 0;
    if(a<0){
        if(-1*a%b==0)return a/b;
        return a/b ;
    }
    else{
        if(a%b==0)return a/b;
        else return a/b+1;
    }
 }
 
 ///
void solve(){
     
    int n;cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];

     ll low=1;
 ll high=1e9;
 ll ans=1;

   while(low<=high){
    ll mid=(low+high)/2;

     bool flag=true;
     vector<ll>v2;
     for(int i=0;i<n;i++)v2.push_back(v[i]);

        

     for(int i=n-1;i>=2;i--){
        if(v2[i]<mid)flag=false;
        else{
            ll x=min(v2[i]-mid,v[i]);
            x=x-x%3;
            v2[i-1]=v2[i-1]+x/3;
            v2[i-2]=v2[i-2]+(2*x)/3;            
        }
     }
     if(v2[0]<mid|| v2[1]<mid)flag=false;

     if(flag){
        ans=max(ans,mid);
        low=mid+1;
     }
     else{
        high=mid-1;
     }
   }

   cout <<ans<<endl;
}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}