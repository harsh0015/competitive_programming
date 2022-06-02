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
    vector<int>v1(n),v2(n);

    for(int i=0;i<n;i++)cin>>v1[i];
        for(int i=0;i<n;i++)cin>>v2[i];

    sort(v1.begin(), v1.end());
sort(v2.begin(), v2.end());

bool flag=true;
for(int i=0;i<n;i++){
    if( v2[i] - v1[i] !=1 && v2[i]!=v1[i])flag=false;
} 

if(flag)cout <<"YES"<<endl;
else cout <<"NO"<<endl;

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