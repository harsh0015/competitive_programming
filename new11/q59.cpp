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

    string mi=s;
    string ma=s;
    int n=s.length();

    for(int i=1;i<n;i++){
        string h="";

        for(int j=i;j<n;j++)h=h+s[j];
        for(int k=0;k<i;k++)h=h+s[k];

        ma=max(ma,h);
    mi=min(mi,h);
    }

  cout <<mi<<endl;
  cout <<ma<<endl;

}
 
 
int main(){
    fastio;
 
    int t = 1;
   
   
    while(t--){
        solve();
    }
    return 0;
}