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
 
 ///
void solve(){
     
    int n;cin>>n;
    vi v(n);
    rep(i,0,n)cin>>v[i];

    if(n==1){
        cout <<1<<endl;
        return;
    }

    vector<int>count(11,0);
    int ans=0;

    for(int i=0;i<n;i++){
        set<int>st;
        for(int j=1;j<11;j++){
            if(count[j]!=0)st.insert(count[j]);
        }
        if(st.size()==1){
            ans=max(ans,i+1);
        }
        count[v[i]]++;

        int c=count[v[i]];

        int d=0;
        for(int j=1;j<11;j++){
            if(count[j]!=0 && count[j]!=c)d++;
        }

        if(d!=1){
            continue;
        }

        bool flag=false;
        
         for(int j=1;j<11;j++){
            if(count[j]!=0 && count[j]!=c && (count[j]==1|| count[j]==c+1))flag=true;
        }

        if(flag){
            ans=max(ans,i+1);
        }
    }

    cout <<ans<<endl;

}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
  
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}