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
 int n,a,b,c;cin>>n>>a>>b>>c;

 string s;cin>>s;

 int x=0,y=0;

 for(int i=0;i<n;i++){
    if(s[i]=='0')x++;
    else y++;
 }


int ans=x*a+y*b;

int r;

if(a>b){

     r=x*c + (x+y)*b;
}
else{
    r=y*c + (x+y)*a;
}

ans=min(ans,r);

cout <<ans<<endl;

 
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