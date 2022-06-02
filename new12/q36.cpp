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

 ll mod =1e9+7;
int n,m,k;

void solve(){

    cin>>n>>m>>k;
    int arr[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            char x;cin>>x;
            if(x=='*')arr[i][j]=1;
            else arr[i][j]=0;
        }

    bool dp[n][m];


    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            if(arr[i][j]==0 )dp[i][j]=true;
            else dp[i][j]=false;
        }


    for(int i=1;i<n;i++){
        for(int j=1;j<m-1;j++){
             
             if(arr[i][j]==1){
                int len=0;
                int h=0;
                vector<vector<int>>vp;
                while( i-h<=n-1 && j-h>=0 && j+h<=m-1 && arr[i-h][j-h]==1 && arr[i-h][j+h]==1){
                      vp.push_back({i-h,j-h});
                      vp.push_back({i-h,j+h});
                      h++;
                }
                if(h>=k+1){
                  for(auto i:vp){
                    dp[i[0]][i[1]]=true;
                  }
                }
             }
        }
    }

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(!dp[i][j]){
                cout <<"NO"<<endl;
                return;
            }

            cout <<"YES"<<endl;

}
 

 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}