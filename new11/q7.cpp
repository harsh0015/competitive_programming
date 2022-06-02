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

    int n,k;cin>>n>>k;
    string s;cin>>s;
     
     sort(s.begin(), s.end());
     if(s[0]!=s[k-1]){
        cout <<s[k-1]<<endl;
        return;
     }
     cout <<s[0];

     if(s[k]!=s[n-1]){
        for(int i=k;i<n;i++)cout <<s[i];

        cout <<endl;
    return;
     }

     int x=n-k;

     if(x%k==0){
        for(int i=0;i<x/k;i++)cout <<s[k];

            cout <<endl;
        return;
     }
     else{
          for(int i=0;i<x/k+1;i++)cout <<s[k];

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