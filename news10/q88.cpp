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

    ll n,k;cin>>n>>k;
    vector<ll>both,a,b;
    while(n--){
     ll t,x,y;
     cin>>t>>x>>y;
     if(x==1 && y==1)both.push_back(t);
     else if(x==1 && y==0)a.push_back(t);
     else if(y==1 && x==0) b.push_back(t);
     else continue;
    }
    sort(both.begin(), both.end());
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<ll>comb;

    ll i=0;
    while(i<a.size() && i<b.size()){
        comb.push_back(a[i]+b[i]);
        i++;
    }

    for(ll i=0;i<both.size();i++){
        comb.push_back(both[i]);
    }

    sort(comb.begin(), comb.end());

    

    ll ans=0;
    if(comb.size()<k){
        cout <<-1<<endl;
        return;
    }

    for(ll i=0;i<k;i++)ans=ans+comb[i];

        cout <<ans<<endl;

}
 
 
int main(){
    fastio;
 
    int t = 1;
   
   
    while(t--){
        solve();
    }
    return 0;
}