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
   ll n;cin>>n;
   vector<ll>v(n);
   for(ll i=0;i<n;i++)cin>>v[i];
   vector<ll>pre(n);  
   pre[0]=v[0];
   for(ll i=1;i<n;i++)pre[i]=pre[i-1]+v[i];
    vector<ll>suf(n);
    suf[n-1]=v[n-1];
    for(ll i=n-2;i>=0;i--)suf[i]=suf[i+1]+v[i];
    vector<ll>pre_max(n);
vector<ll>pre_ind(n);
    ll ind=0;
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(sum==0){
            if(v[i]>0){
              pre_max[i]=v[i];
              sum+=v[i];
              ind=i;
              pre_ind[i]=ind;

            }
            else{
                pre_ind[i]=-1;
                pre_max[i]=0;
            }
        }
        else{
            if(sum+v[i]>0){
                if(sum+v[i]>v[i]){
                     pre_max[i]=sum+v[i];
                     sum+=v[i];
                    pre_ind[i]=ind;
                }
                else{
                    pre_max[i]=v[i];
                    sum=v[i];
                    pre_ind[i]=i;
                    ind=i;
                }
               
            }
            else{
                sum=0;
                pre_max[i]=0;
                pre_ind[i]=-1;
            }
        }
    }

    ///


     vector<ll>suf_max(n);
vector<ll>suf_ind(n);
     ind=0;
     sum=0;
    for(ll i=n-1;i>=0;i--){
        if(sum==0){
            if(v[i]>0){
              suf_max[i]=v[i];
              sum+=v[i];
              ind=i;
              suf_ind[i]=ind;

            }
            else{
                suf_ind[i]=-1;
                suf_max[i]=0;
            }
        }
        else{
            if(sum+v[i]>0){
                if(sum+v[i]>v[i]){
                     suf_max[i]=sum+v[i];
                   sum+=v[i];
                  suf_ind[i]=ind;
                }
                else{
                   suf_max[i]=v[i];
                   sum=v[i];
                   suf_ind[i]=i;
                   ind=i;
                }
               
            }
            else{
                sum=0;
                suf_max[i]=0;
                suf_ind[i]=-1;
            }
        }
    }
    for(auto x:pre_max)cout <<x<<" ";
        cout <<endl;
    // for(auto x:suf_max)cout <<x<<" ";
    //     cout <<endl;
    bool flag=true;
    stack<vector<ll>>st;
    ll big=1e17+7;
    st.push({big,-1});
    for(ll i=0;i<n;i++){
        while(st.top()[0]<=v[i]){
            auto p=st.top();
             st.pop();
             ll mid=p[1];
             ll j=st.top()[1]+1;
             ll k=i-1;

             ll sum=0;
             if(mid-1>=0){
                if(pre_max[mid-1]>0){
                    
                    if(pre_ind[mid-1]<j){
                        ll h=pre[mid-1];
                       
                        if(j-1>=0)
                           h-=pre[j-1];
                       sum+=max(0ll,h);
                    }
                    else sum+=pre_max[mid-1];

                
                }
                
             }
             // if(mid==0)cout<<sum<<endl;
             if(mid+1<n){
                 if(suf_max[mid+1]>0){
                     if(suf_ind[mid+1]>k){
                        ll h=suf[mid+1];
                    
                     if(k+1<n)
                       h-=suf[k+1];
                   sum+=max(0ll,h);
                }
                else sum+=suf_max[mid+1];
                 }
               
             }
             // if(mid==0)cout <<sum<<endl;
             // cout <<j<<" "<<mid<<" "<<k<<" "<<sum<<endl;
              if(sum+p[0]>p[0])flag=false;
        }
        
        st.push({v[i],i});
       
    }

    while(st.size()>1){
        
        auto p=st.top();
             st.pop();
             ll mid=p[1];
             ll j=st.top()[1]+1;
             ll k=n-1;

             ll sum=0;
             if(mid-1>=0){
                if(pre_max[mid-1]>0){
                    
                    if(pre_ind[mid-1]<j){

                        ll h=pre[mid-1];
                        if(j-1>=0)
                            h-=pre[j-1];
                          
                          sum+=max(0ll,h);
                    }
                    else sum+=pre_max[mid-1];

                
                }
                
             }
             if(mid+1<n){
                 if(suf_max[mid+1]>0){
                     if(suf_ind[mid+1]>k){

                     ll h=suf[mid+1];
                     if(k+1<n)
                       h-=suf[k+1];
                   sum+=max(0ll,h);
                }
                else sum+=suf_max[mid+1];
                 }
               
             }
             cout <<j<<" "<<mid<<" "<<k<<" "<<sum<<endl;
              if(sum+p[0]>p[0])flag=false;
    }
    if(flag)cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
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