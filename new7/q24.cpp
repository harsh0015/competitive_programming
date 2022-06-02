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
 
 string s;cin>>s;

 if(s[0]!='1'){
    cout <<"1"+s<<endl;
    return;
 }
 else {
    string ans="";
    for(int i=0;i<s.length();i++){
        if(i==1){
           ans=ans+'0';
        }
        ans=ans+s[i];
    }

    cout <<ans<<endl;
    return;
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