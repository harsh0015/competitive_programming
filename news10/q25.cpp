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
const int N=1e5+6;
vector<int>parent1(N),parent2(N),sz1(N),sz2(N);

int findSet(int v ,vector<int>&parent){
  if(v==parent[v])
    return v;

  return parent[v]=findSet(parent[v],parent);
}

// void makeSet(int i){
//     parent[i]=i;
//     sz[i]=1;
// }

void unionSets( vector<int>&parent,vector<int>&sz,int a ,int b){
    a=findSet(a,parent);
    b=findSet(b,parent);

    if(a!=b){
        if(sz[a]<sz[b])
            swap(a,b);

        parent[b]=a;
        sz[a]+=sz[b];
    }
}
 
void solve(){

int n,m1,m2;cin>>n>>m1>>m2;

 for(int i=1;i<=n;i++){
    parent1[i]=i;
    parent2[i]=i;
    sz1[i]=1;
    sz2[i]=1;
 }

for(int i=0;i<m1;i++){
    int a,b;cin>>a>>b;

    unionSets(parent1,sz1,a,b);
}

for(int i=0;i<m2;i++){
    int a,b;cin>>a>>b;

    unionSets(parent2,sz2,a,b);
}

vector<pair<int,int>>ans;
int count=0;

for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
        

        if(findSet(i,parent1)==findSet(j,parent1) || findSet(i,parent2)==findSet(j,parent2))continue;


        unionSets(parent2,sz2,i,j);
        unionSets(parent1,sz1,i,j);

        count++;
        ans.push_back({i,j});


    }
}

cout <<count <<endl;

for(int i=0;i<count;i++){
    cout <<ans[i].first<<" "<<ans[i].second<<endl;
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