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

    int n;cin>>n;
    vector<pair<int,int>>v;
   
    map<pair <int,int >,int >m;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        v.push_back({b,a});
        v[i].first=max(0,i-v[i].first);
        v[i].second=min(i+v[i].second,n-1);
       

    }
     int len=1;

     int f=v[0].first;
     int l=v[0].second;

     for(int i=1;i<n;i++){
        if(v[])
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