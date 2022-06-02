#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ceel(x, y) ((x) / (y) + !((x) % (y) == 0))
#define endl '\n'
using namespace std;
typedef unsigned long long int ll;
typedef long double ld;
#define rall(x) x.rbegin(), x.rend()
#define all(x) x.begin(),x.end()
const ll M = 1e9 + 7, inf = 1e18;

void fun(){
ll x,c;cin>>x>>c;
vector<ll>v;
vector<pair<ll,ll>>primes;
for(ll i=2;i*i<=x;i++){
    if(x%i==0){
        ll co=0;
        while(x%i==0){
            x=x/i;
            co++;
        }
       primes.push_back({i,co});
    }
}
if(x>1)primes.push_back({x,1});
ll ans=1;
for(auto p:primes){
    ll t=p.second;
    ll u=INT_MAX;
   
    for(ll i=0;i<1000;i++){
        t=t+c-2*min(t,c);
        u=min(u,t);
    }
    ll y=1;
    for(ll i=0;i<u;i++)y=y*p.first;
    ans=ans*y;
}

cout <<ans<<endl;
}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
   
    cin>>t;
   for(int i=1;i<=t;i++){
    fun();
   }
    return 0;
}