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

    int n,k;cin>>n>>k;
     
  string s;cin>>s;
   
 

  vector<vector<int>>v(n,vector<int>(3,0));

  for(int i=0;i<n;i++){
    if(i<3){
        if(s[i]=='R')v[i][0]++;
        else if(s[i]=='G')v[i][1]++;
        else v[i][2]++;
    }
    else{
        if(s[i]=='R'){
            v[i][0]=v[i-3][0]+1;
            v[i][1]=v[i-3][1];
            v[i][2]=v[i-3][2];
        }
        else if(s[i]=='G'){
            v[i][0]=v[i-3][0];
            v[i][1]=v[i-3][1]+1;
            v[i][2]=v[i-3][2];
        }
        else {
             v[i][0]=v[i-3][0];
            v[i][1]=v[i-3][1];
            v[i][2]=v[i-3][2]+1;
        }
    }
  }


   // for(int i=0;i<n;i++)cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<endl;
    int ans=INT_MAX;
   for(int i=0;i<=n-k;i++){
    int count=0;
      
      if(i-3<0){
        //RGB
         count=count + v[i+3*((k-1)/3)][2]+ v[i+3*((k-1)/3)][1];
         if(k>1)
           count=count + v[i+1 +3*((k-2)/3)][0]+ v[i+1+3*((k-2)/3)][2] -(i+1-3>=0?v[i+1-3][0] +v[i+1-3][2]:0);
         if(k>2)
            count=count + v[i+2 +3*((k-3)/3)][0]+ v[i+2+3*((k-3)/3)][1] -(i+2-3>=0 ? v[i+2-3][0] +v[i+2-3][1]:0);
         ans=min(ans,count);
         count=0;
        //GBR
          count=count + v[i+3*((k-1)/3)][0]+ v[i+3*((k-1)/3)][2];
         if(k>1)
           count=count + v[i+1+3*((k-2)/3)][0]+ v[i+1+3*((k-2)/3)][1] -(i+1-3>=0?v[i+1-3][0] +v[i+1-3][1]:0);
         if(k>2)
            count=count + v[i+2+3*((k-3)/3)][2]+ v[i+2+3*((k-3)/3)][1] -(i+2-3>=0?v[i+2-3][1] +v[i+2-3][2]:0);
         ans=min(ans,count);
         count=0;
         ///BRG 

          count=count + v[i+3*((k-1)/3)][0]+ v[i+3*((k-1)/3)][1];
         if(k>1)
           count=count + v[i+1+3*((k-2)/3)][1]+ v[i+1+3*((k-2)/3)][2]-(i+1-3>=0?v[i+1-3][1] +v[i+1-3][2]:0);
         if(k>2)
            count=count + v[i+2+3*((k-3)/3)][0]+ v[i+2+3*((k-3)/3)][2] -(i+2-3>=0?v[i+2-3][0] +v[i+2-3][2]:0);
         ans=min(ans,count);
      }
      else{
       
        count=0;
        //RGB
         count=count + v[i+3*((k-1)/3)][2]+ v[i+3*((k-1)/3)][1] -v[i-3][2] -v[i-3][1];
         if(k>1)
           count=count + v[i+1+3*((k-2)/3)][0]+ v[i+1+3*((k-2)/3)][2] -v[i+1-3][0] -v[i+1-3][2] ;
         if(k>2)
            count=count + v[i+2+3*((k-3)/3)][0]+ v[i+2+3*((k-3)/3)][1] -v[i+2-3][0] -v[i+2-3][1];

       
         ans=min(ans,count);
         count=0;
        //GBR
          count=count + v[i+3*((k-1)/3)][0]+ v[i+3*((k-1)/3)][2] -v[i-3][0] -v[i-3][2];
         if(k>1)
           count=count + v[i+1+3*((k-2)/3)][0]+ v[i+1+3*((k-2)/3)][1] -v[i+1-3][0] -v[i+1-3][1];
         if(k>2)
            count=count + v[i+2+3*((k-3)/3)][2]+ v[i+2+3*((k-3)/3)][1] -v[i+2-3][2] -v[i+2-3][1];
         ans=min(ans,count);
         count=0;
         ///BRG 

          count=count + v[i+3*((k-1)/3)][0]+ v[i+3*((k-1)/3)][1] -v[i-3][0] -v[i-3][1];
         if(k>1)
           count=count + v[i+1+3*((k-2)/3)][1]+ v[i+1+3*((k-2)/3)][2] -v[i+1-3][2] -v[i+1-3][1];
         if(k>2)
            count=count + v[i+2+3*((k-3)/3)][0]+ v[i+2+3*((k-3)/3)][2] -v[i+2-3][0] -v[i+2-3][2];
         ans=min(ans,count);
      }
    
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