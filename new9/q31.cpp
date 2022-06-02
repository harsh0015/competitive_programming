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

 int n;cin>>n;

 string s1,s2;cin>>s1>>s2;

 int ans=0;

 int dp[n];

 for(int i=0;i<n;i++)dp[i]=0;

 for(int i=0;i<n;i++){
    if(s2[i]=='1' && s1[i]=='0'){
       ans++;
       dp[i]=1;
    }
 }

 for(int i=0;i<n;i++){
    if(s2[i]=='1' && s1[i]=='1'){
        if(i>0 && s1[i-1]=='1' && dp[i-1]==0){
            ans++;
            dp[i-1]=1;
            continue;
        }

        if(i<n-1 && s1[i+1]=='1' && dp[i+1]==0){
            ans++;
            dp[i+1]=1;
            continue;
        }
    }
 }

 cout <<ans<<endl;
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