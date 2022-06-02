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

map<int,int>m;

int arr[n];
int x=0;

for(int i=0;i<n;i++){
    cin>>arr[i];
    m[arr[i]]++;

    x=max(x,m[arr[i]]);
}

if(x>k){
    cout <<"NO"<<endl;
    return;
}
// if(m.size()<k){
//     cout <<"NO"<<endl;
//     return;
// }

cout <<"YES"<<endl;

vector<pair<int,int>>v;

for(int i=0;i<n;i++){
    v.push_back({arr[i],i});
}

sort(v.begin(), v.end());

int dp[n];
int h=1;
int i=0;
while(i<n){
    dp[i]=h;

    if(h==k)h=1;
    else h++;
    i++;
}

// for(int i=0;i<n;i++)cout <<dp[i]<<" ";

map<int,int>m1;

for(int i=0;i<n;i++){
    m1[v[i].second]=dp[i];
}

for(int i=0;i<n;i++)cout <<m1[i]<<" ";
 
}


int main(){
    fastio;

    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}