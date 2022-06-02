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

    int n,e;cin>>n>>e;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    int ans=0;

    int l=0,r=0;

    while(l<=r && r<n){
      
        if(v[l]!=1){
            r=l+1;

            while(v[r]==1)r++;

            int t=max((n-1-l)/e,(r-l-1)/e);

             ans=ans+t;
           
           l=r;
        }
        else l++;r++;
    }

    cout <<ans<<endl;

}
 

int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}