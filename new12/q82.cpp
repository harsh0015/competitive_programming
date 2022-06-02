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
     
    int n,m;cin>>n>>m;
     vector<int>v1(n),v2(m);
     int ma1=0,ma2=0;

     map<int,int>m1,m2;
     for(int i=0;i<n;i++){
        cin>>v1[i];
        m1[v1[i]]++;
        ma1=max(ma1,v1[i]);
     }
        
    for(int i=0;i<m;i++){
        cin>>v2[i];
        m2[v2[i]]++;
        ma2=max(ma2,v2[i]);
    }

    if(ma2>ma1){
        cout <<"YES"<<endl;
        return;
    }
    if(ma1>ma2){
        cout <<"NO"<<endl;
        return;
    }
   int i=0,j=1;
   vector<int>ans;
   sort(v2.begin(), v2.end());
   reverse(v2.begin(), v2.end());

    ans.push_back(v2[0]);
   while(i<n && j<m){
       if(v1[i]<ans[ans.size()-1]){
        i++;
        continue;
       }
       else if(v1[i]==ans[ans.size()-1]){
         ans.push_back(v2[j]);
         j++;
       }
       else{
        cout <<"NO"<<endl;
        return;
       }
   }

   if(i!=n){
    cout <<"NO"<<endl;
    return;
   }

   cout <<"YES"<<endl;

   int k=m-1;
   while(k>=j){
    cout <<v2[k]<<" ";
    k--;
   }

   for(int i=0;i<ans.size();i++)cout <<ans[i]<<" ";

cout <<endl;


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