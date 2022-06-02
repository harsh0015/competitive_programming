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
 string conv(int n){
     string s="";
     while(n){
        if(n%2==1)s=s+"1";
        else s=s+"0";
        n=n/2;
     }

     reverse(s.begin(),s.end());
     int len=s.length();
     for(int i=0;i<32-len;i++)s="0"+s;

        return s;
 }
 ///

void solve(){
     
    ll n,m;cin>>n>>m;
    vector<ll>vn(n),vm(m);
    for(ll i=0;i<n;i++)cin>>vn[i];
    for(ll i=0;i<m;i++)cin>>vm[i];

    string dp[n][m];

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            dp[i][j]=conv(vn[i]&vm[j]);

        }
    }

    vector<ll>ans;   
    vector<vector<bool>>valid(n,vector<bool>(m,true));

    for(ll k=0;k<32;k++){
         ll count=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(valid[i][j]){
                    if(dp[i][j][k]=='0'){
                    count++;
                    break;
                 }
                }
                 
            }
        }
        if(count==n){
            for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(valid[i][j]){
                     if(dp[i][j][k]=='1'){
                    valid[i][j]=false;
                 }
                }
            }
        }
        }
       if(count==n){
        ans.push_back(0);
       }
       else ans.push_back(1);
    }

   reverse(ans.begin(), ans.end());

    ll ret=0;
    for(ll i=0;i<32;i++){
        ret=ret+pow(2,i)*ans[i];
    }

    cout <<ret<<endl;

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