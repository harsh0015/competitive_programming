#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<long long int>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
using vpll =vector<pair<ll,ll>>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)


int parent[1000];
int sz[1000];
int ma=1;

int find(int i){
   if(parent[i]==i)return i;
   else return find(parent[i]);
}

void unio(int a,int b){
      int x=find(a);
      int y=find(b);
      
      cout <<"hey"<<endl;
      cout <<x<<" "<<y<<endl;
     

      if(sz[x]>=sz[y]){
        parent[y]=x;
        sz[x]+=sz[y];
        sz[y]=0;
        ma=max(ma,sz[x]-1);
      }
      else{
        parent[x]=y;
        sz[y]+=sz[x];
        sz[x]=0;
        ma=max(ma,sz[y]-1);
      }
}
void solve(){
     
    int n,d;cin>>n>>d;
    ma=1;

     
     for(int i=0;i<n;i++){
        parent[i]=i;
        sz[i]=1;
    }

    for(int i=0;i<d;i++){
        int a,b;cin>>a>>b;
        a--;b--;
        
        if(find(a)!=find(b)){
          
            unio(a,b);
        }
        cout <<ma<<endl;
    }


}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
 
   
   for(int i=1;i<=t;i++){
    // cout<<"Case "<<i<<":"<<" ";
    solve();
   }
    return 0;
}