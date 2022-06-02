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

ll calc(string s,string t){
    ll count01=0,count10=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1' && t[i]=='0')count10++;
        if(s[i]=='0' && t[i]=='1')count01++;
    }

    if(count01==count10)return count01+count10;
    else return INT_MAX;
}

ll calc1(string s,string t,char c){

    ll ind=-1;
    for(ll i=0;i<s.length();i++){
        if(s[i]=='1' && t[i]==c){
            ind=i;
            break;
        }
    }

    for(int i=0;i<s.length();i++){
        if(i==ind)continue;
        if(s[i]=='1')s[i]='0';
        else s[i]='1';
    }

    if(ind==-1)return INT_MAX;
     return calc(s,t);
}
void solve(){
    int n;cin>>n;
     string s,t;cin>>s>>t;
     ll ans=calc(s,t);
      
      ans=min(ans,1+calc1(s,t,'1'));
      ans=min(ans,1+calc1(s,t,'0'));

      if(ans==INT_MAX)cout <<-1<<endl;
      else cout <<ans<<endl;

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