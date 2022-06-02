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
int dp[11],arr[n];

for(int i=1;i<11;i++)dp[i]=0;

for(int i=0;i<n;i++){
    cin>>arr[i];
    dp[arr[i]]++;
}


for(int i=n-1;i>=0;i--){
    map<int,int>m;
    int cou=0;

    for(int j=1;j<11;j++){
        if(dp[j]!=0){
            cou++;
            m[dp[j]]++;
        }
    }

    if(cou==1){
        cout <<i+1<<endl;
        return;
    }

    // cout <<i<<" "<<m.size()<<endl;

    if(m.size()>2){
        dp[arr[i]]--;
        continue;
    }

    vector<pair<int,int>>v;
    for(auto a:m){
      v.push_back({a.first,a.second});
    }
    sort(v.begin(), v.end());

    if(m.size()==1 && v[0].first==1){
        cout<<i+1<<endl;
        return;
    }
    if(v[1].second==1 && v[1].first-v[0].first==1 || v[0].second==1){
        cout <<i+1<<endl;
        return;
    }
    dp[arr[i]]--;
}
 
}


int main(){
    fastio;

    int t = 1;

    while(t--){
        solve();
    }
    return 0;
}