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

   ll ma=0;

   for(ll i=0;i<n;i++){
    cin>>arr[i];
    ma=max(ma,arr[i]);
}

    if(arr[0]<ma){
        cout <<-1<<endl;
        return;
    }

    vector<pair<ll,ll>>v;

  

    for(ll i=1;i<n;i++){
        v.push_back({arr[i],i});

    }



        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

    //       for(int i=0;i<n-1;i++){
    //     cout <<v[i].first<<" "<<v[i].second<<endl;
    // }

        ll count=0;

        ll done=0;

        for(ll i=0;i<n;i++){
            if(done==n-1)break;
          if(v[i].second<done)continue;
          else{
           
            count++;
            done=v[i].second;
          }
        }
     
cout <<count<<endl;

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