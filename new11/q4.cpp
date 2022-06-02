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
    int n=s.length();
    int si=0,r=0,p=0;
    for(int i=0;i<n;i++){
        if(s[i]=='R')p++;
        else if(s[i]=='S')r++;
        else si++;
    }
   
    if(r>=max(si,p)){
      for(int i=0;i<n;i++)cout <<"R";

        cout <<endl;
    return;
    }
    if(si>=max(r,p)){
      for(int i=0;i<n;i++)cout <<"S";

        cout <<endl;
    return;
    }
    if(p>=max(si,r)){
      for(int i=0;i<n;i++)cout <<"P";

        cout <<endl;
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