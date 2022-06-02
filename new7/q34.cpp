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
 int cap[n];

 for(int i=1;i<n+1;i++)cin>>cap[i];

    int q;cin>>q;
    

    int pop[n+1];

    for(int i=1;i<n+1;i++)pop[i]=0;

        int pre[n+1];
    pre[0]=0;

    for(int i=1;i<=n;i++)pre[i]=pre[i-1]+cap[i];

while(q--){
    int x,k;cin>>x>>k;
     
}
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