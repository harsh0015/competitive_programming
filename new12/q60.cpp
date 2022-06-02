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


 ///
void solve(){
     
  ll n;cin>>n;
  vector<pair<ll,ll>>v;
  for(ll i=0;i<n;i++){
    pair<ll,ll>p;
    v.push_back(p);
  }
  for(ll i=0;i<n;i++)cin>>v[i].first;
   for(ll i=0;i<n;i++)cin>>v[i].second;




  vector<vector<ll>>vp1;

for(ll i=0;i<n;i++){
    vp1.push_back({v[i].first,v[i].second,i});
}
  
  sort(vp1.begin(), vp1.end());

vector<vector<ll>>vp2;
for(ll i=0;i<n;i++){
    vp2.push_back({v[i].second,v[i].first,i});
}

sort(vp2.begin(), vp2.end());

vector<pair<ll,ll>>vp3(n);



ll pre1[n];
pre1[0]=vp1[0][1];


for(ll i=1;i<n;i++)
    pre1[i]=max(pre1[i-1],vp1[i][1]);


ll pre2[n];
pre2[0]=vp2[0][1];


for(ll i=1;i<n;i++)
    pre2[i]=max(pre2[i-1],vp2[i][1]);



for(ll i=0;i<n;i++){
   vp3[vp1[i][2]].second=pre1[i];
   vp3[vp2[i][2]].first=pre2[i];
}

 ll ma1=0;

 ll ma2=0;



 for(ll i=0;i<n;i++){
    ma1=max(ma1,v[i].first);
    ma2=max(ma2,v[i].second);
 }
   
   string ans="";

   for(ll i=0;i<n;i++){
    if(vp3[i].first==ma1 || vp3[i].second==ma2)ans=ans+"1";
    else ans=ans+"0";
   }

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