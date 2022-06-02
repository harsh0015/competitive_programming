

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

vector<ll> prime(ll n){

    vector<ll>v;

    while(n%2==0){
        v.push_back(2);
        n=n/2;
    }

    for(ll i=3;i*i<=n;i=i+2){
        while(n%i==0){
            v.push_back(i);
            n=n/i;
        }
    }

    if(n>1)v.push_back(n);

    return v;
}
void solve(){
 ll n;cin>>n;

 vector<ll> v=prime(n);

// for(int i=0;i<v.size();i++)cout <<v[i]<<" ";
// cout <<endl;

 if(v.size()<3){
    cout <<"NO"<<endl;
    return;
 }
 ll a,b=1,c=1;
 a=v[0];
ll i;
for( i=1;i<v.size();i++){
    b=b*v[i];
    if(b!=a)break;

}

for(ll j=i+1;j<v.size();j++){
      c=c*v[j];
}
      

    // cout <<a<<" "<<b<<" "<<c<<endl;

    if(a!=b && b!=c && c!=a && a!=1 && b!=1&& c!=1){
        cout <<"YES"<<endl;
        cout <<a<<" "<<b<<" "<<c<<endl;
    }
    else cout <<"NO"<<endl;
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