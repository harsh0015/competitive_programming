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
 ll arr[n];

 map<ll,ll>m;

 for(ll i=0;i<n;i++){
    cin>>arr[i];
    m[arr[i]]++;
 }

 vector<pair<ll,ll>>v;

 for(ll i=0;i<n;i++)v.push_back({arr[i],i});

sort(v.begin(), v.end());

ll sum=0;

for(auto i:m){
    if(i.second<=k)sum=sum+i.second;
}
sum=sum-sum%k;
ll ans[n]={0};
ll c=1;
ll t=0;

for(ll i=0;i<n;i++){
    if(m[v[i].first]>k){
        ll j=i;
        ll r=1;
        while(v[j].first==v[i].first ){
            if(r<=k){
                ans[v[j].second]=r;
                r++;
            }
            j++;
           
        }
        if(j==n)break;
        i=j-1;
    }
    else{
        if(c<=k && t<sum){
            ans[v[i].second]=c;
            c++;
            if(c>k)c=1;

            t++;
        }
        
    }
}

for(ll i=0;i<n;i++)cout<<ans[i]<<" ";

cout <<endl;
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