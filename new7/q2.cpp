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
 ll n,k;cin>>n>>k;
 string s;cin>>s;

 vector<ll>v;

 for(ll i=0;i<n;i++){
    if(s[i]=='0')v.pb(i);
 }

 if(v.size()==0){
    cout <<s<<endl;
    return;
 }

 // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

 //    cout <<endl;

 for(ll i=0;i<v.size();i++){
    // cout <<k<<endl;
    if(v[i]-i<=k){
        // cout <<"ye"<<endl;
         k=k-(v[i]-i);
        v[i]=i;
       
        // cout <<k<<endl;
    }
    else{
        v[i]=v[i]-(k);
        k=0;
        break;
    }
 }

 // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

 //    cout <<endl;

 for(ll i=0;i<v[0];i++)
   cout <<"1";

for(ll i=1;i<v.size();i++){
    cout <<"0";
    for(ll j=0;j<v[i]-v[i-1]-1;j++)cout <<"1";

    // cout <<"0";
}
cout <<"0";
for(ll i=v[v.size()-1]+1;i<n;i++)cout <<"1";

cout <<endl;
}

int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}