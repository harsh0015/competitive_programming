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

    ll a,b,c;
    cin>>a>>b>>c;

    if(a>max(b,c))cout <<0<<" ";
    else cout << max(b,c)+1-a<<" ";

    if(b>max(a,c))cout <<0<<" ";
    else cout << max(a,c)+1-b<<" ";

    if(c>max(b,a))cout <<0<<" ";
    else cout << max(b,a)+1-c<<" ";

    cout <<endl;

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