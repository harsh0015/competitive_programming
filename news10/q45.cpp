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
int a,b,c,d;

vector<pair<int,int>> moves={{1,0},{0,1},{-1,0},{0,-1}};

pair<int,int> par[1001][1001];

bool isvalid(int x,int y){
    if(x<0 || x>n-1 || y<0 || y>m-1)return false;
    if(vis[x][y]==true || arr[x][y]=='#')return false;

    return true;
}


void bfs(int x,int y){
    vis[x][y]=true;

    queue<pair<int,int>>q;
    q.push({x,y});

    while(!q.empty()){
        int w=q.front().first;
        int h=q.front().second;
        q.pop();

        for(auto mv:moves){
            if(isvalid(w+mv.first,h+mv.second)){
                q.push({w+mv.first,h+mv.second});
                vis[w+mv.first][h+mv.second]=true;
                   par[w+mv.first][h+mv.second]={w,h};

                   if(w+mv.first==c && h+mv.second==d)break;
            }
        }
    }


}


 
void solve(){

  
   cin>>n>>m;

   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++){

        cin>>arr[i][j];
           if(arr[i][j]=='A'){
        a=i;b=j;
    }
    if(arr[i][j]=='B'){
        c=i;d=j;
    }

    }

 
   }

   bfs(a,b);

   if(!vis[c][d]){
     cout <<"NO"<<endl;
     return;
   }

   cout <<"YES"<<endl;

 string ans="";
   pair<int,int>curr={c,d};

   while(!(curr.first==a && curr.second==b)){
    pair<int,int>next=par[curr.first][curr.second];

    pair<int,int> dir={next.first-curr.first,next.second-curr.second};

    if(dir.first==0 && dir.second ==1)ans=ans+"L";
    else if(dir.first==0 && dir.second ==-1)ans=ans+"R";
    else if(dir.first==1 && dir.second ==0)ans=ans+"U";
    else ans=ans+"D";

    curr=next;
   }
    
reverse(ans.begin(), ans.end());

cout <<ans.length()<<endl;

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