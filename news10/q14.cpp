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

     if(a>b)swap(a,b);

     ll d=b-a;

     if(d==1 && (a>2|| b>2)){
        cout <<-1<<endl;
        return;
     }

     if(c>2*d || a>2*d || b>2*d){
        cout <<-1<<endl;
        return;
     }

     ll ma=2*d;

     if(c+d <=ma){
        cout<<c+d<<endl;
        return;
     }

     if(c-d>=1){
        cout <<c-d<<endl;
        return;
     }

     cout <<-1<<endl;

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