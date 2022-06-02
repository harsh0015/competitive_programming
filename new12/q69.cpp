#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
 
 bool isPrime(int n){
   
   for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
   }

   return true;
 }
 ///
void solve(){
     
    ll n;cin>>n;

    vector<ll>v(n);
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }

        sort(v.begin(), v.end());

    if(n%2==0){
        ll x=v[0]*v[n-1];

        for(ll i=1;i<n/2;i++){
            if(v[i] *v[n-i-1] !=x){
                cout <<-1<<endl;
                return;
            }
        }
    }
    else{
            ll x=v[0]*v[n-1];

        for(ll i=1;i<=n/2;i++){
            if(v[i] *v[n-i-1] !=x){
                cout <<-1<<endl;
                return;
            }
        }
    }

    for(ll i=2;i*i<=v[0]*v[n-1];i++){
        if((v[0]*v[n-1])%i==0){
            if(m.find(i)==m.end() || m.find((v[0]*v[n-1])/i)==m.end()){
                cout <<-1<<endl;
                return;
            }
        }
    }

    cout <<v[0]*v[n-1]<<endl;


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