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

 int arr[n+1];

 for(int i=1;i<n+1;i++)cin>>arr[i];

    int dp[n+1];
dp[0]=0;
  
  char last='n';
  for(int i=1;i<n+1;i++){
    if(arr[i]==1){
        if(last!='c'){
            dp[i]=dp[i-1]+1;
            last='c';
        }
        else{
            dp[i]=dp[i-1];
            last='n';
        }
    }
    if(arr[i]==0){
        dp[i]=dp[i-1];
        last='n';
    }
    if(arr[i]==2){
         if(last!='g'){
            dp[i]=dp[i-1]+1;
            last='g';
        }
        else{
            dp[i]=dp[i-1];
            last='n';
        }
    }
    if(arr[i]==3){
        if(last=='n'){
            dp[i]=dp[i-1]+1;
            continue;
        }
        if(last=='c'){
            dp[i]=dp[i-1]+1;
            last='g';
            continue;
        }
        if(last=='g'){
            dp[i]=dp[i-1]+1;
            last='c';
            continue;
        }

    }
  }

  cout <<n-dp[n]<<endl;

}


int main(){
    fastio;

    int t = 1;
   
    while(t--){
        solve();
    }
    return 0;
}