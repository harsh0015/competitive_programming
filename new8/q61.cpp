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


 int n=s.length();

 for(int i=0;i<n;i++){
    for(int j=1;j<=n-i;j++){
        // cout <<i<<" "<<j<<endl;
       string h=s.substr(i,j);

       string u=t.substr(0,j);
       // cout <<h<<" "<<u<<endl;

       if(h!=u)continue;
       // else cout <<"*"<<h<<endl;

        string r=t.substr(j,t.length()-j);
        // cout <<r<<endl;

       string y="";
       int e=r.length();
       int q=i+j-2;
       while(e-- && q>=0){
          y=y+s[q];
          q--;
       }

       if(y==r){
        cout <<"YES"<<endl;
        return;
       }

    }
 }

 cout <<"NO"<<endl;



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