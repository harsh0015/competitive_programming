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
 
 ll n,a,b;cin>>n>>a>>b;

 string s;cin>>s;


 if(b>=0){
    cout << n*(a+b)<<endl;
    return;
 }

 else {
    ll count1=0,count2=0;

    for(ll i=1;i<n;i++){
        if(s[i]=='1'&& s[i-1]=='0')count1++;
         if(s[i-1]=='1'&& s[i]=='0')count2++;
    }
if(s[0]=='0')count2++;
else count1++;
    // cout <<count1<<" "<<count2<<endl;

    ll count=min(count2,count1);

    cout <<a*n+ b*(count+1)<<endl;

 }
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