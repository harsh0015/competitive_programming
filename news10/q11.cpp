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


ll n,k;cin>>n>>k;

ll h=1;
ll p;

bool flag=false;

for(ll i=0;i<n;i++){
if((i*(i+1))/2==k){
    flag=true;
    h=i;
    p=0;
    break;
}

if((i*(i+1))/2>k){
    h=i;
    p=k-((i-1)*i)/2;
    break;
}
}

// cout <<h<<" "<<p<<endl;
string ans="";
ll count=0;

for(ll i=0;i<n-h-1;i++)
    {ans=ans+"a";
count++;

}

ans=ans+"b";
count++;


for(ll i=count;i<n;i++)ans=ans+"a";

    if(p==0){
        ans[n-h]='b';
    }
    else{
      ll x=n-1;
      while(p--){
        x--;
      }
      ans[x+1]='b';
    }

cout <<ans<<endl;
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