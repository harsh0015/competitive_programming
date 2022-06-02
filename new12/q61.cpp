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

bool not_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return true;
    }
    return false;
}

void solve(){
     
   int n;cin>>n;
   vector<string>v;

   for(int i=0;i<n-2;i++){
    string s;cin>>s;
    v.push_back(s);
   }
    string h=v[0];
    string ans="";

  for(int i=0;i<1;i++)ans=ans+h[i];

   
   bool flag=false;

   for(int i=1;i<n-2;i++){
    if(v[i-1][1]==v[i][0])ans=ans+v[i][0];
    else{
        ans=ans+ v[i-1][1]+v[i][0];
        flag=true;
    }
   }
    ans=ans+v[n-3][1];
   if(!flag)ans=ans+"a";
  

   cout <<ans<<endl;


}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}