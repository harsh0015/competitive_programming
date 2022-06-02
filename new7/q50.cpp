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
 queue<ll> q;
 map<ll,ll>m;
 ll n,k;cin>>n>>k;

 for(ll i=0;i<n;i++){
    ll x;cin>>x;

   if(m[x]==1){
    continue;
   }
   else{
    if(q.size()<k){
        m[x]=1;
        q.push(x);
    }
    else{
        m[q.front()]=0;
        q.pop();
        q.push(x);
        m[x]=1;
    }
   }
 }
 vector<ll>v;
cout <<q.size()<<endl;
 while(!q.empty()){
    v.push_back(q.front());
    q.pop();
 }

 for(ll i=v.size()-1;i>=0;i--){
    cout <<v[i]<<" ";
 }
 cout <<endl;
 
}


int main(){
    fastio;

    int t = 1;
    
    while(t--){
        solve();
    }
    return 0;
}