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

char arr[1001][1001];
bool vis[1001][1001];
int n,m;


bool isValid(int x,int y){
    if(x<0 || y<0 || x>n-1 || y>m-1)return false;

    if(arr[x][y]=='#' || vis[x][y]==true)return false;

    return true;
}

void dfs(int x,int y){

    vis[x][y]=true;

    if(isValid(x-1,y))
        dfs(x-1,y);

     if(isValid(x,y-1))
        dfs(x,y-1);


        if(isValid(x+1,y))
        dfs(x+1,y);


        if(isValid(x,y+1))
        dfs(x,y+1);
}

 
void solve(){

    cin>>n>>m;
   

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];

      for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            vis[i][j]=false;


    int count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(isValid(i,j)){
                count++;
                dfs(i,j);
            }
        }
    }
     

      cout <<count<<endl;
        


}
 
 
int main(){
    fastio;
 
    int t = 1;
   
    while(t--){
        solve();
    }
    return 0;
}