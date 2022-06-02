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
typedef unsigned long long int ll;
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
     
   ll x,y;cin>>x>>y;  

   
   if(x==y){
    cout <<"YES"<<endl;
    return;
   }

   string sy="";
   while(y){
    if(y%2==0){
        sy=sy+"0";
    }
    else sy=sy+"1";

    y=y/2;
   }
   reverse(sy.begin(), sy.end());


  
   string sx="";
   while(x){
    if(x%2==0){
        sx=sx+"0";
    }
    else sx=sx+"1";

    x=x/2;
   }
   reverse(sx.begin(), sx.end());


    string sx2="";
    bool flag=true;
    for(int i=sx.size()-1;i>=0;i--){
         if(sx[i]=='0' && flag)continue;
         else if(sx[i]=='0' && !flag)sx2= "0"+sx2;
          else {
            flag=false;
            sx2="1"+sx2;
          }

            }
              
              string sx3=sx2;
         reverse(sx2.begin(), sx2.end());
          string sx4=sx;
        reverse(sx.begin(), sx.end());



           
            if(sx.size()<=sy.size()){
 for(int i=0;i<sy.size()-sx.size()+1;i++){
         
         int j=0;
         int k=i;
         while( j<sx.size() && k<sy.size() && sx[j]==sy[k]){
            j++;k++;
         }
          if(j<sx.size())continue;

          bool flag=true;

          for(int j=0;j<i;j++)if(sy[j]=='0')flag=false;

        for(int j=i+sx.size();j<sy.size();j++)if(sy[j]=='0')flag=false;

            if(flag){
                cout <<"YES"<<endl;
                return;
            }
    }

            }
            
    

   
  if(sy.size()>=sx2.size()){
    for(int i=0;i<sy.size()-sx2.size()+1;i++){
         
         int j=0;
         int k=i;
         while( j<sx2.size() && k<sy.size() && sx2[j]==sy[k]){
            j++;k++;
         }
          if(j<sx2.size())continue;

          bool flag=true;

          for(int j=0;j<i;j++)if(sy[j]=='0')flag=false;
        for(int j=i+sx2.size();j<sy.size();j++)if(sy[j]=='0')flag=false;

            if(flag){
                cout <<"YES"<<endl;
                return;
            }
    }
  }

  if(sy.size()>=sx3.size()){
    for(int i=0;i<sy.size()-sx3.size()+1;i++){
         
         int j=0;
         int k=i;
         while( j<sx3.size() && k<sy.size() && sx3[j]==sy[k]){
            j++;k++;
         }
          if(j<sx3.size())continue;

          bool flag=true;

          for(int j=0;j<i;j++)if(sy[j]=='0')flag=false;
        for(int j=i+sx3.size();j<sy.size();j++)if(sy[j]=='0')flag=false;

            if(flag){
                cout <<"YES"<<endl;
                return;
            }
    }
  }

    if(sy.size()>=sx4.size()){
    for(int i=0;i<sy.size()-sx4.size()+1;i++){
         
         int j=0;
         int k=i;
         while( j<sx4.size() && k<sy.size() && sx4[j]==sy[k]){
            j++;k++;
         }
          if(j<sx4.size())continue;

          bool flag=true;

          for(int j=0;j<i;j++)if(sy[j]=='0')flag=false;
        for(int j=i+sx4.size();j<sy.size();j++)if(sy[j]=='0')flag=false;

            if(flag){
                cout <<"YES"<<endl;
                return;
            }
    }
  }

    

    cout <<"NO"<<endl;

}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}