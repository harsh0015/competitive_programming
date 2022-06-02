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

    ll n,v;cin>>n>>v;

    
    if(n%v==0){

    }
    ll sum1=0;
    ll sum2=0;
    sum2=((n-1)*n)/2;

    if(v>=n-1){
        sum1=n-1;
    }
    else{
        sum1=sum1+v;
        ll x=n-1-v;

        sum1=sum1+((x+1)*(x+2))/2-1;
    }

    cout <<sum2<<" "<<sum1<<endl;

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