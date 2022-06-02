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
 
 ll n;cin>>n;

 ll arr[n];
 for(ll i=0;i<n;i++)cin>>arr[i];

ll arr2[n];

for(ll i=0;i<n;i++){
    arr2[i]=-1*arr[i]-1;
}

ll neg=0;
vector<ll>ans;
for(ll i=0;i<n;i++){
    if(arr[i]+arr2[i]<0){
        neg++;
        ans.push_back(min(arr[i],arr2[i]));
    }
    else ans.push_back(max(arr[i],arr2[i]));
}

if(neg %2==0){
    for(ll i=0;i<ans.size();i++)cout <<ans[i]<<" ";

    cout <<endl;
}
else {
    ld x=-1;
    ll y=0;

    for(ll i=0;i<n;i++){
      if(arr[i]>arr2[i]){
        if(ld(arr[i])/abs(arr2[i])>x){
            x=ld(arr[i])/abs(arr2[i]);
            // cout <<"%"<<x<<endl;
            y=i;
        }
      }
      else{
         if(ld(arr2[i])/abs(arr[i])>x){
            x=ld(arr2[i])/abs(arr[i]);
            // cout <<"%"<<x<<endl;
            y=i;
        }
      }
    }

    for(int i=0;i<n;i++){
        if(i==y){
            if(ans[i]==arr[i])ans[i]=arr2[i];
            else ans[i]=arr[i];
        }
    }

      for(int i=0;i<ans.size();i++)cout <<ans[i]<<" ";

    cout <<endl;


}
}


int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}