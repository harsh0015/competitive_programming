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

 int arr[n];
unordered_map<int,pair<int ,int>>m;
 for(int i=0;i<n;i++){
    cin>>arr[i];
    m[arr[i]].first++;
 }

    sort(arr,arr+n);

    int ans=INT_MAX;

    for(auto i:m){
        if(i.second.first>=k){
            cout <<0<<endl;
            return;
        }
    }


    for(int i=0;i<n;i++){
        int count=0;
        while(arr[i]>0){

            count++;
            arr[i]=arr[i]/2;
            m[arr[i]].first++;
            m[arr[i]].second=m[arr[i]].second+count;

            if(m[arr[i]].first>=k){
                ans=min(ans,m[arr[i]].second);
            }
        }
    }

cout <<ans<<endl;
    
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