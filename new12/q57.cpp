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

    int arr[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            char c;cin>>c;
            if(c=='.')arr[i][j]=1;
            else arr[i][j]=0;
        }

        if(arr[0][0]==0 || arr[n-1][n-1]==0){
            cout <<0<<endl;
            return;
        }

    int dp[n][n];
    dp[0][0]=1;
    for(int i=1;i<n;i++){
       if(arr[0][i]==0)dp[0][i]=0;
       else dp[0][i]=dp[0][i-1];
    }
    
        for(int i=1;i<n;i++){
       if(arr[i][0]==0)dp[i][0]=0;
       else dp[i][0]=dp[i-1][0];
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i][j]==0)dp[i][j]=0;
            else dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
        }
    }

    cout <<dp[n-1][n-1]<<endl;
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