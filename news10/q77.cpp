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
 int n,m;

int arr[32][32];
int count;
vector<vector<int>>v(65);
bool vis[32][32];

bool isValid(int x,int y){
    if(x>n ||y>m)return false;
    if(vis[x][y])return false;

    return true;
}

void dfs(int x,int y,int c){
    vis[x][y]=true;
    v[c].push_back(arr[x][y]);

    if(isValid(x+1,y))dfs(x+1,y,c+1);
    if(isValid(x,y+1))dfs(x,y+1,c+1);

}
 
void solve(){

   cin>>n>>m;
   for(int i=1;i<65;i++){
    v[i].clear();
   }
   
    for(int i=1;i<n+1;i++)
        for(int j=1;j<=m;j++)
            cin>>arr[i][j];


      for(int i=1;i<n+1;i++)
        for(int j=1;j<=m;j++)
            vis[i][j]=false;

    dfs(1,1,1);
int h=(m+n-1)/2 ;
int ans=0;

// for(int i=1;i<m+n;i++){
//     for(int j=0;j<v[i].size();j++){
//         cout <<v[i][j]<<" ";
//     }
//     cout <<endl;
// }

 

  for(int i=1;i<h+1;i++){
    int count0=0,count1=0;

    for(int j=0;j<v[i].size();j++){
        if(v[i][j]==0)count0++;
        else count1++;
    }

    for(int j=0;j<v[m+n-i].size();j++){
         if(v[m+n-i][j]==0)count0++;
        else count1++;
    }

     // cout <<i<<" "<<count0<<" "<<count1<<endl;  
    ans=ans+min(count1,count0);
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