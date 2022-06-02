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
 string s;cin>>s;

 ll n=s.length();

 ll dp[n][2];

 dp[0][0]=dp[0][1]=0;

 if(s[0]=='?')dp[0][0]=dp[0][1]=1;
 else if(s[0]=='1')dp[0][1]=1;
 else dp[0][0]=1;

 for(int i=1;i<n;i++){
    dp[i][0]=dp[i][1]=0;

    if(s[i]=='?'){
        dp[i][0]=dp[i-1][1]+1;
        dp[i][1]=dp[i-1][0]+1;
    }
    else if(s[i]=='1')dp[i][1]=dp[i-1][0]+1;
    else dp[i][0]=dp[i-1][1]+1;
 }

 ll ans=0;
 for(int i=0;i<n;i++)ans=ans+max(dp[i][0],dp[i][1]);

    cout <<ans<<endl;
 
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}