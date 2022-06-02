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
    
    if(n==2){
        cout <<"ab"<<endl;
        return;
    }
    if(n==3){
        cout <<"aba"<<endl;
        return;
    }

   int x=-1;
   int count=0;
   for(int i=3;i<=n;i++){
  if(n%i==0){
   if(i%2==1){
      if(n/i>count){
        x=i;
        count=n/i;
      }
   }
   else{
     if((2*n)/i>count){
        x=i;
        count=(n*2)/i;
     }
   }
  }
}
  
    string s="";
     
    for(int i=1;i<x+1;i++){
        if(i==1 || i==x)s=s+"b";
        else s=s+"a";
    }

    string ans="";
    for(int i=0;i<n/x;i++){
        ans=ans+s;
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