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

 ll a,b,c;cin>>a>>b>>c;

 if(a+c<=2*b){
    cout <<2*b-a-c<<endl;
    return;
 }
 else{
    if((a+c)%2==0){
        cout <<(a+c-2*b)/2<<endl;
        return;
    }
    else {
        cout<<(a+c+1-2*b)/2+1<<endl;
    return;
}
 }
}


int main(){
    fastio;

    int t = 1;

    while(t--){
        solve();
    }
    return 0;
}