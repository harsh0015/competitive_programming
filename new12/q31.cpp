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

    ll x,y,p,q;cin>>x>>p>>y>>q;

    ll x1=x;
    ll len1=0;
    while(x1){
     len1++;
     x1=x1/10;
    }

     ll y1=y;
    ll len2=0;
    while(y1){
     len2++;
     y1=y1/10;
    }
   

    if(len1+p>len2+q){
        cout <<">"<<endl;
        return;
    }
    else if(len1+p<len2+q){
        cout <<"<"<<endl;
        return;
    }
   else{

     

    if(len1==len2){

        if(x>y)cout <<">"<<endl;
        else if(x<y)cout <<"<"<<endl;
        else cout <<"="<<endl;
        return;
    }
    else if(len1>len2){
       
            y=y*(pow(10,len1-len2));
             if(x>y)cout <<">"<<endl;
           else if(x<y)cout <<"<"<<endl;
           else cout <<"="<<endl;
           return;
        }
        else{
            
             x=x*(pow(10,len2-len1));
             if(x>y)cout <<">"<<endl;
           else if(x<y)cout <<"<"<<endl;
           else cout <<"="<<endl;
           return;
        }
    }
   


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