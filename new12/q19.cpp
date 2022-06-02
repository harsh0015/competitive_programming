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


 
void solve(){

    ll n;cin>>n;
    ll s;cin>>s;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v[i]=-1*a;
    }

 
    ll i=0;
    ll j=0;
    ll cur=0;
    ll start=-1;
    ll end=-1;
    ll len=0;

    while(i<=j && j<n){
       cur=cur+v[j];
       if(cur<=s){
        if(j-i+1>len){
             len=max(len,(j-i+1));
             start=i;
             end=j;
        }
       
       }
       else{
        while(cur>s && i<=j){
            cur=cur-v[i];
            i++;
        }
           if(j-i+1>len){
             len=max(len,(j-i+1));
             start=i;
             end=j;
        }

       }
       j++;
    }
     
     if(len==0)cout <<-1<<endl;
     else cout <<start+1<<" "<<end+1<<endl;
}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
    while(t--){
        solve();
    }
    return 0;
}