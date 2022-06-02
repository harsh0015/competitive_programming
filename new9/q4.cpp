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
ll n,a,b,k;cin>>n>>a>>b>>k;

ll arr[n];
ll ans=0;

vector<ll>v;

for(ll i=0;i<n;i++){
    cin>>arr[i];

    if( arr[i]%(a+b)!=0  && arr[i]%(a+b)<=a ){
        ans++;
        continue;
    }

    if(arr[i]%(a+b)==0)v.push_back(b);
    else v.push_back(arr[i]%(a+b)-a);

}

sort(v.begin(), v.end());

// for(int i=0;i<v.size();i++)cout <<v[i]<<" ";
//     cout <<endl;

ll i=0;

while(k>0 && i<v.size()){
    // cout <<v[i]<<" "<<k<<endl;
    if(v[i]%a==0){
        if(v[i]/a<=k){
            ans++;
            k=k-v[i]/a;
        }
        else{
            break;
        }
    }
    else{
        if(v[i]/a +1<=k){
            ans++;
            k=k-v[i]/a-1;
        }
        else{
            break;
        }
    }
    i++;
}

cout <<ans<<endl;
 
}


int main(){
    fastio;

    int t = 1;
 
    while(t--){
        solve();
    }
    return 0;
}