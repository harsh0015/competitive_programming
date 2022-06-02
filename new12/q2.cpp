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

    string s,p;cin>>s>>p;
      
         int ans=0;
        for(int i=0;i<s.length();i++){
            int m=INT_MAX;
            for(int j=0;j<p.length();j++){
             int x=s[i]-p[j];
             int h=min((26+x)%26 ,(26-x)%26);
             m=min(m,h);
           
            }

            ans=ans+m;
        }
        cout <<ans<<endl;

}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
    for(int i=1;i<=t;i++){
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}