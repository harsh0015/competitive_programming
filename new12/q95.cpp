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
const ll M = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)

 ll mod(ll x){
            return ((x%M + M)%M);
        }
ll add(ll a, ll b){
            return mod(mod(a)+mod(b));
        }
  ll mul(ll a,ll b){
            return mod(mod(a)*mod(b));
        }
    
ll modPow(ll a, ll b){
            if(b==0)
                return 1ll;
            if(b==1)
                return a%M;
            ll res=1;
            while(b){
                if(b%2==1)
                    res=mul(res,a);
                a=mul(a,a);
                b=b/2;
            }
            return res;
        }

        const ll N=2e5+2;
        ll fact[N];

        void precalc(){
            fact[0]=1;
            for(int i=1;i<N;i++){
                fact[i]=mul(fact[i-1],i);
            }
        }

 ll inv(ll x){
            return modPow(x,M-2);
        }

  ll divide(ll a, ll b){
            return mul(a,inv(b));
        }
   ll nCr(ll n, ll r){
            return divide(fact[n],mul(fact[r],fact[n-r]));
        }

 
 ///
void solve(){
     
    ll n;cin>>n;
    vector<string>v;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        string s="";
        while(x){
            if(x%2==1)s=s+"1";
            else s=s+"0";
            x=x/2;
        }
        ll len=60-s.length();
        while(len--)s=s+"0";
      
        v.push_back(s);
    }
    string ans="";
    ll i=0;
    
    while(1){
        if(i>60){
            cout <<-1<<endl;
            return;
        }
      ll count=0;
      for(ll j=0;j<n;j++){
        if(v[j][i]=='1')count++;
      }
      if(count%2==0){
         ans+="0";
      }
      else{
        ans+="1";
        for(ll j=0;j<n;j++){
            if(v[j][i]=='1'){
                ll r=i+1;
                bool flag=false;
                while(r<v[j].size()){
                    if(v[j][r]=='1'){
                        v[j][r]='0';
                        r++;
                    }
                    else{
                        v[j][r]='1';
                        flag=true;
                        break;
                    }
                }
                if(!flag){
                    v[j]+="1";
                }
            }
        }
      }
      ll ma=0;
      for(ll j=0;j<n;j++){
        ma=max(ma,ll(v[j].length()));
      }
      for(ll j=0;j<n;j++){
        ll y=ma-v[j].size();
        while(y--)v[j]+="0";
      }
      i++;
      if(i>=ma)break;

    }
   ll val=1;
   ll result=0;
   for(ll i=0;i<ans.size();i++){
        if(ans[i]=='1'){
            result+=val;
        }
        val=val*2;
   }


    cout <<result<<endl;

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