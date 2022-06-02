
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
vector<vector<ll>>g;
ll mod=1e9+7;

bool visited[100001];
ll counter=0;

void dfs(ll n){
	visited[n]=true;
	counter++;
     
     if(g[n].size()>0){
     	for(ll i=0;i<g[n].size();i++){
		if(!visited[g[n][i]])dfs(g[n][i]);
	}
     }
	


}


 
void solve(){
	
	ll n,k;cin>>n>>k;
	
	for(ll i=0;i<n+1;i++){
		vector<ll>v;
		g.push_back(v);
	}

     for(ll i=0;i<n-1;i++){
     	ll a,b,l;cin>>a>>b>>l;

     	if(l==0){
     		g[a].push_back(b);
     	    g[b].push_back(a);
     	}
     	
     }

     ll count=0;
     vector<ll>v;

     for(ll i=1;i<n+1;i++){
     	
     	if(visited[i]!=true){
           counter=0;
           dfs(i);
           if(counter>1){
     		v.push_back(counter);
     	}
     	}

     }

     ll sum1=1;

     for(ll i=0;i<k;i++){
     	sum1=(sum1*n)%mod;
     }
     ll sum2=0;

     for(ll i=0;i<v.size();i++){
     	ll h1=1;
     	for(ll j=0;j<k;j++){
         h1=(h1*v[i])%mod;
     	}
     	if(h1-v[i]<0)h1=mod+h1-v[i];
     	else h1=h1-v[i];

     	sum2=(sum2+h1)%mod;
     }

     if(sum1-sum2>0)cout <<sum1-sum2-n<<endl;
     else cout <<mod+ sum1-sum2-n<<endl;

}
 
 
int main(){
    fastio;
 
    int t = 1;   
   
    while(t--){
        solve();
    }
    return 0;
}