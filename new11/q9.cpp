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

    int arr1[n],arr2[n];

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

      for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
  map<int ,int>m;

  for(int i=0;i<n;i++){
    m[arr1[i]]=i;
    m[arr2[i]]=i;
  }

  int pre[2*n+1];
  int x=m[2*n];
 

  for(int i=2*n;i>1;i=i-2){
    x=min(x,m[i]);
    pre[i]=x;
  }
    
    int ans=INT_MAX;

    for(int i=1;i<=n;i++){
       int y=2*i-1;
       ans=min(ans,m[y]+pre[y+1]);
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