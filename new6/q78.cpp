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

ll pn(ll x)
{
    ll ans=0;
    for(ll i=2; i*i<=x; i++)
        while(x%i==0)
        {
            ans++;
            x/=i;
            if(x==1)break;
        }
    if(x>1)ans++;
    return ans;
}

void solve(){
 
 ll a,b,k;cin>>a>>b>>k;

 ll m=pn(a);
 ll n=pn(b);




if(k==1 && (a%b==0 || b%a==0) && a!=b)
    cout <<"YES"<<endl;
else if(k>=2 && m+n>=k)
    cout <<"YES"<<endl;
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