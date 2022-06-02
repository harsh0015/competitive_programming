#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
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

 ll mod =1e9+7;

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

    ll n;cin>>n;
    ll m=n;
    vector<ll>v;
    bool flag=true;
    while(n){
        if(n%3==2)flag=false;
        v.push_back(n%3);
        n=n/3;
    }
    if(flag){
        cout <<m<<endl;
        return;
    }

    reverse(v.begin(), v.end());

    ll zero=-1;
    ll two=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==0)zero=i;
        if(v[i]==2){
            if(zero!=-1){
                for(ll j=0;j<v.size();j++){
                    if(j==zero)v[j]=1;
                    if(j>zero)v[j]=0;
                }
                reverse(v.begin(),v.end());
                break;
            }
            else{
               ll r=1;
               for(int i=0;i<v.size();i++)r=r*3;
                cout <<r<<endl;
                return;
            }
        }
    }



   ll x=0;
   ll r=1;
   for(ll i=0;i<v.size();i++){
    x=x+ v[i]*r;
    r=r*3;
   }

   cout <<x<<endl;

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