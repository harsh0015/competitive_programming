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
   int n,x,y;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   }
   int low=0;
   int high=n;
   vector<int>pre(n);
   pre[0]=v[0];
   for(int i=1;i<n;i++)pre[i]=pre[i-1]+v[i];
   int ans=0;
   // while(low<=high){
   //  int mid=(low+high)/2;
     
   //   int max_sum=0;
   //    priority_queue<vector<int>>pq;
   //    priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq1;
   //    bool flag=false;
   //    for(int i=0;i<n;i++){
   //      pq.push({v[i],i});
   //      while(!pq1.empty() && pq1.top()[0]<i){
   //          max_sum-=pq1.top()[1];
   //          pq1.pop();
   //      }
   //      while(!pq.empty() && pq1.size()<y){
   //          if(pq.top()[1]<i)pq.pop();
   //          else{
   //              pq1.push({pq.top()[1],pq.top()[0]});
   //              max_sum+=pq.top()[0];
   //              pq.pop();
   //          }
   //      }
   //      if(i-mid+1>=0){
   //          int sum=pre[i];
   //          if(i-mid>=0)sum-=pre[mid-mid];
   //          sum-=max_sum;
   //          sum=max(0,sum-x);
   //          if(sum==0){
   //           flag=true;
   //          }
   //      }
   //    }
   //   if(flag){
   //      ans=max(ans,mid);
   //      low=mid+1;
   //   }
   //   else high=mid-1;
   // }
   cout <<ans<<endl;
}
 
 //////
 
int main(){
    fastio;
    #ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

    int t = 1;
   
    cin>>t;
   for(int i=1;i<=t;i++){
     // cout<<"Case #"<<i<<":"<<" ";
    solve();
   }
    return 0;
}