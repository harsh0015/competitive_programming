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

ll k;cin>>k;

bool flag=false;
ll r;
for(ll i=1;i<INT_MAX;i++){
    if(i*i==k){
        flag=true;
        r=i;
        break;
    }

    if(i*i>k){
        r=i;
        break;
    }
}

if(flag){
    cout <<r<<" "<<1<<endl;
    
    return;
}

if(k== r*r-r+1){
 cout <<r <<" "<<r<<endl;
 return;
}
else if(k>r*r-r){
    ll d=k-(r*r-r+1);

    cout <<r<<" "<<r-d<<endl;
    return;
}

else{
    ll d=(r*r-r+1)-k;

    cout <<r-d<<" "<<r<<endl;
    return;
}
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