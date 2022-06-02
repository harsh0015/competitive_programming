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

 string s,t;cin>>s>>t;

 int k=s.length()-1;
 int m=t.length()-1;

 if(m>k){
    cout <<"NO"<<endl;
    return;
 }
 
 for(int i=m;i>=0;i--){

    while( k>=0 && t[i]!=s[k] ){
        k=k-2;
    }

    if(k<0){
        cout <<"NO"<<endl;
        return;
    }

    k--;
 }

 cout <<"YES"<<endl;
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