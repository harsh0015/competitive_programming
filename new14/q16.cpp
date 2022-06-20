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
typedef  long long int ll;
typedef long double ld;
#define rall(x) x.rbegin(), x.rend()
#define all(x) x.begin(),x.end()
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
ll MM=1e15;
ll mm=-1e15;

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


void solve(){
   ll n;cin>>n;
   vector<ll>v(n);
   for(ll i=0;i<n;i++)cin>>v[i];
   ll sum=accumulate(all(v),0ll);
  vector<ll>pre(n);
  pre[0]=v[0];
  for(ll i=1;i<n;i++)pre[i]=pre[i-1]+v[i];

  
 
   vector<ll>time(n);
   time[0]=v[0];
    ll val=v[0];
  
   for(ll i=1;i<n;i++){
       ll extra=val*i-pre[i-1];
       // cout <<i<<" "<<extra<<endl;
       v[i]-=extra+val;
        if(v[i]<0){
            time[i]=val;
            continue;
        }
       ll y=v[i]/(i+1);
       if(v[i]%(i+1)!=0)y++;
       if(y>0)val+=y;
       time[i]=val;
   }
   // cout <<pre[n-1]<<endl;
   
   vector<ll>flow(n);
   flow[0]=pre[n-1];
   for(ll i=1;i<n;i++){
     ll low=1;
     ll high=1e13;
     ll ans=1e15;
     while(low<=high){
        ll mid=(low+high)/2;

         if(mid<time[i] || (pre[n-1]>mid*(i+1))){
            low=mid+1;
            continue;
         }
         else{
            ans=min(ans,mid);
            high=mid-1;
         }
     }
   flow[i]=ans;
   }
  reverse(all(flow));
  // for(auto x:flow)cout <<x<<" ";
  //   cout <<endl;
 
    ll q;cin>>q;
    while(q--){
        ll t;cin>>t;
        if(n*t<sum){
            cout <<-1<<endl;
            continue;
        }
       else{
         auto it=upper_bound(all(flow),t);
         if(it==flow.begin()){
            cout <<-1<<endl;
            continue;
         }
         it--;
         cout <<n-ll(it-flow.begin())<<endl;
       }
      
    }
}
 
 //////
 
int main(){
    fastio;
    #ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

    int t = 1;
   
    
   for(int i=1;i<=t;i++){
     // cout<<"Case #"<<i<<":"<<" ";
    solve();
   }
    return 0;
}