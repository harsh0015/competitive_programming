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
  
  int n,x;cin>>n>>x;

  int dp[n+1];

  for(int i=1;i<=n;i++)dp[i]=0;

    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        dp[a]++;
        dp[b]++;
    }

    if(dp[x]==0 || dp[x]==1){
        cout <<"Ayush"<<endl;
        return;
    }

    if((n-1)%2==0)cout <<"Ashish"<<endl;
    else cout <<"Ayush"<<endl;
 
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