#include<bits/stdc++.h>
using namespace std;
 
//common file for PBDS
#include<ext/pb_ds/assoc_container.hpp>
//including tree_order_statistics_node_update
#include<ext/pb_ds/tree_policy.hpp>
//namespace
using namespace __gnu_pbds;
#define int long long
 
//macro definition
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
 
#define ld long double
#define endl "\n"
const int mod=1000000007;
const int MAX=100005;
mt19937_64 rng(std::chrono::steady_clock::now().time_since_epoch().count());
 
const int bit=31;
//1.DP se soch
//2.DP se soch
//3.DP se soch
//graph, gcd, BS, seive
//if NOTA,then
//brute force hi optimal h
 

void solve(){
    int h,w,c;
    cin>>h>>w>>c;
    //input grid
    int A[h+1][w+1];
    for(int i=1;i<=h;i++){
      for(int j=1;j<=w;j++){
        cin>>A[i][j];
      }
    }
    //store minimum cost in this
    int ans=1e12;
    //first find it using 2 dp arrays i.e, dp and dp_
    //assuming that the second station is always built in south east of first station
    //the second case is that the second station is built in sout west of first so that is covered
    //in the next block of code

    //dp[i][j]->minimum cost such that 1 station is a;ready built and currently we are at (i,j)
    //dp_[i][j]-> minimum cost such that second station is built at (i,j)
    //three cases for dp[i][j] i.e, first station built at (i,j) , station is built already and we are now
    //building rail track so we can come at (i,j) from north or west so three cases are as given in the recurrence
    //for first case i.e, south east one

    //Two cases for dp_[i][j] i.e, build second station at (1,j) coming from west or north while building tracks
    
    {
    int dp[h+1][w+1];
    int dp_[h+1][w+1];
    for(int i=0;i<=h;i++){
      for(int j=0;j<=w;j++){
        dp[i][j]=1e12;
        dp_[i][j]=1e12;
      }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
          dp[i][j]=min(A[i][j],min(dp[i-1][j]+c,dp[i][j-1]+c));
        }
    }
    
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
          dp_[i][j]=A[i][j]+min(dp[i-1][j]+c,dp[i][j-1]+c);
          ans=min(ans,dp_[i][j]);
        }
    }
   
    }
    //for second case i.e, south west so we reverse each row of grid and repeat the steps for south east
    {
    int dp[h+1][w+1];
    int dp_[h+1][w+1];
    for(int i=0;i<=h;i++){
      reverse(A[i]+1,A[i]+w+1);
      for(int j=0;j<=w;j++){
        // cout<<A[i][j]<<" ";
        dp[i][j]=1e12;
        dp_[i][j]=1e12;
        
      }
      // cout<<endl;
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
          dp[i][j]=min(A[i][j],min(dp[i-1][j]+c,dp[i][j-1]+c));
        }
    }
    
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
          dp_[i][j]=A[i][j]+min(dp[i-1][j]+c,dp[i][j-1]+c);
          ans=min(ans,dp_[i][j]);
        }
    }
    }
    cout<<ans;
    cout<<endl;
}
int32_t main(){
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      // srand(time(0));
      int t;
      // cout<<fixed<<setprecision(20);
      t=1;
      // cin>>t;
      while(t--){
        // cout<<"Case #"<<tt<<": ";
            solve();
            // tt++;
      }
      return 0;
}