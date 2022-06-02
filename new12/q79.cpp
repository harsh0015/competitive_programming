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
bool isvowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c== 'u')return true;
    return false;
}
void solve(){
     
   int n;cin>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];

  int q;cin>>q;
     vector<int>change(n,-1);
    
    vector<vector<ll>>moves;
  for(int j=0;j<q;j++)
  {
        int t;cin>>t;

         if(t==1){
            int i,a;cin>>i>>a;
            i--;
            v[i]=a;
            change[i]=j;
         }
         else{
            int a;cin>>a;
             moves.push_back({j,a});
         }
    }

    if(moves.size()==0){
        for(int i=0;i<n;i++)cout <<v[i]<<" ";

        return ;
    }
     vector<ll>pre(moves.size());
     pre[moves.size()-1]=moves[moves.size()-1][1];

     for(int i=moves.size()-2;i>=0;i--){
        pre[i]=max(pre[i+1],moves[i][1]);
     }
     vector<int>prefix;
     for(int i=0;i<moves.size();i++)prefix.push_back(moves[i][0]);
     


    for(int i=0;i<n;i++){

        if(prefix.size()==0){
            cout <<v[i]<<" ";
            continue;
        }
        auto it=lower_bound(prefix.begin(), prefix.end(),change[i]);
          
          if(it!=prefix.end()){
            int x=it-prefix.begin();
            cout <<max(v[i],pre[x])<<" ";
          }
          else{
             cout <<v[i]<<" ";
           
          }
    }
  
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