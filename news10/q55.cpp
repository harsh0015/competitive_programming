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
int n;
char arr[51][51];
bool vis[51][51];
vector<pair<int,int>>start,last;

bool isValid(int x,int y){
    if(x<0 || x>n-1 || y<0 || y>n-1)return false;
    if(arr[x][y]=='1' || vis[x][y]==true)return false;

    return true;
}

void dfs(int x,int y){
    vis[x][y]=true;

    if(isValid(x+1,y))dfs(x+1,y);
    if(isValid(x-1,y))dfs(x-1,y);
    if(isValid(x,y-1))dfs(x,y-1);
    if(isValid(x,y+1))dfs(x,y+1);
}

void dfss(int x,int y){
    vis[x][y]=true;
    start.push_back({x,y});

    if(isValid(x+1,y))dfss(x+1,y);
    if(isValid(x-1,y))dfss(x-1,y);
    if(isValid(x,y-1))dfss(x,y-1);
    if(isValid(x,y+1))dfss(x,y+1);
}

void dfse(int x,int y){
    vis[x][y]=true;

    last.push_back({x,y});

    if(isValid(x+1,y))dfse(x+1,y);
    if(isValid(x-1,y))dfse(x-1,y);
    if(isValid(x,y-1))dfse(x,y-1);
    if(isValid(x,y+1))dfse(x,y+1);
}


 
void solve(){



   cin>>n;
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    x1--;x2--;y1--;y2--;

     for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        vis[i][j]=false;
   

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];


 dfs(x1,y1);

 if(vis[x2][y2]){
    cout <<0<<endl;
    return;
 }
 for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        vis[i][j]=false;

    dfss(x1,y1);

    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
          vis[i][j]=false;

    dfse(x2,y2);

int ans=INT_MAX;

for(int i=0;i<start.size();i++){
    for(int j=0;j<last.size();j++){
        int val= (start[i].first-last[j].first)*(start[i].first-last[j].first) + (start[i].second-last[j].second)*(start[i].second-last[j].second);
     ans=min(ans,val);
    }
}

    
cout <<ans<<endl;


}
 
 
int main(){
    fastio;
 
    int t = 1;
   
    while(t--){
        solve();
    }
    return 0;
}