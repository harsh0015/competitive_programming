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
     
   int n;cin>>n;
   vector<vector<int>>perm;

   for(int i=0;i<n-2;i++){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());
    perm.push_back(v);
   }

   vector<int>ans(n+1);
   map<int,vector<int>>m;
   for(int i=0;i<n-2;i++){
       m[perm[i][0]].push_back(i);
       m[perm[i][1]].push_back(i);
       m[perm[i][2]].push_back(i);
   }
   int a=0,b=0;
   for(auto i:m){
    if(i.second.size()==1){
        if(a==0)
            a=i.first;
        else b=i.first;
    }
   }

   if(a>b)swap(a,b);
   ans[1]=a;
   ans[n]=b;


   for(auto i: perm[m[a][0]]){
      if(m[i].size()==2){
        ans[2]=i;
        break;
      }
   }
   for(auto i: perm[m[b][0]]){
      if(m[i].size()==2){
        ans[n-1]=i;
        break;
      }
   }

   vector<bool>done(n+1,false);
   done[a]=true;
   done[b]=true;
   done[ans[2]]=true;
   done[ans[n-1]]=true;

   

   for(int i=3;i<=n-2;i++){

      vector<int>v1=m[ans[i-2]];
      vector<int>v2=m[ans[i-1]];

      bool flag=false;
      
      for(int j=0;j<v1.size();j++){
        for(int k=0;k<v2.size();k++){
            if(v1[j]==v2[k]){
                for(int l=0;l<perm[v1[j]].size();l++){
                    if(done[perm[v1[j]][l]]==false){
                        ans[i]=perm[v1[j]][l];
                        done[perm[v1[j]][l]]=true;
                        flag=true;
                    }
                }
            }
            if(flag)break;
        }
        if(flag)break;
      }
   }

   for(int i=1;i<n+1;i++)cout <<ans[i]<<" ";
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