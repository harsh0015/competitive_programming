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
typedef  long long int ll;
typedef long double ld;
#define rall(x) x.rbegin(), x.rend()
#define all(x) x.begin(),x.end()
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
const ll M = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repi(i,a,b) for(ll i=b-1;i>=a;i--)

 ll mod(ll x){
            return ((x%M + M)%M);
        }
ll add(ll a, ll b){
            return mod(mod(a)+mod(b));
        }
  ll mul(ll a,ll b){
            return mod(mod(a)*mod(b));
        }
    
ll modPow(ll a, ll b){
            if(b==0)
                return 1ll;
            if(b==1)
                return a%M;
            ll res=1;
            while(b){
                if(b%2==1)
                    res=mul(res,a);
                a=mul(a,a);
                b=b/2;
            }
            return res;
        }

        const ll N=2e5+2;
        ll fact[N];

        void precalc(){
            fact[0]=1;
            for(int i=1;i<N;i++){
                fact[i]=mul(fact[i-1],i);
            }
        }

 ll inv(ll x){
            return modPow(x,M-2);
        }

  ll divide(ll a, ll b){
            return mul(a,inv(b));
        }
   ll nCr(ll n, ll r){
            return divide(fact[n],mul(fact[r],fact[n-r]));
        }

 
 ///

 string binary(ll n){
        string s="";
        while(n){
            if(n%2==1)s="1"+s;
            else s="0"+s;

            n=n/2;
        }
        ll x=32-s.length();
        while(x--){
            s="0"+s;
        }

        return s;
        }
void solve(){
    
      int n,m;cin>>n>>m;
      vector<string>vs;
      for(int i=0;i<n;i++){
        string s;cin>>s;
        vs.push_back(s);
      }
      vector<vector<int>>vm(n,vector<int>(m,-1));
      vector<vector<int>>vc(n,vector<int>(m,-1));
      vector<vector<char>>moves(n,vector<char>(m,'X'));


      queue<vector<int>>q;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vs[i][j]=='A'){
                  q.push({i,j});
            break;
            }
        }
      }
      int c=0;
      bool flag=false;
      while(!q.empty()){
      queue<vector<int>>q1;
      while(!q.empty()){

        vector<int>p=q.front();
        q.pop();
        if(vc[p[0]][p[1]]!=-1)continue;
        vc[p[0]][p[1]]=c;
         int x=p[0];
         int y=p[1];

        
         if(x+1<n && vs[x+1][y]!='#' && vc[x+1][y]==-1){
              moves[x+1][y]='D';
              q1.push({x+1,y});
         }
         if(x-1>=0 && vs[x-1][y]!='#' && vc[x-1][y]==-1){
            moves[x-1][y]='U';
            q1.push({x-1,y});
         }
         if(y+1<m && vs[x][y+1]!='#' && vc[x][y+1]==-1){
            moves[x][y+1]='R';
            q1.push({x,y+1});
         }
         if(y-1<m && vs[x][y-1]!='#' && vc[x][y-1]==-1){
            moves[x][y-1]='L';
            q1.push({x,y-1});
         }
      }
      c++;
      swap(q1,q);

      }

      queue<vector<int>>qq;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vs[i][j]=='M')
                qq.push({i,j});
        }
      }
     
     c=0;
      while(!qq.empty()){
      queue<vector<int>>qq1;
      while(!qq.empty()){
      
        vector<int>p=qq.front();
        qq.pop();
        if(vm[p[0]][p[1]]!=-1)continue;
        vm[p[0]][p[1]]=c;
         int x=p[0];
         int y=p[1];

         if(x+1<n && vs[x+1][y]!='#'&& vm[x+1][y]==-1){
            
              qq1.push({x+1,y});
         }
         if(x-1>=0 && vs[x-1][y]!='#' && vm[x-1][y]==-1){
            
            qq1.push({x-1,y});
         }
         if(y+1<m && vs[x][y+1]!='#' && vm[x][y+1]==-1) {
          
            qq1.push({x,y+1});
         }
         if(y+1<m && vs[x][y-1]!='#' && vm[x][y-1]==-1){
            qq1.push({x,y-1});
         }
      }
      c++;
      swap(qq1,qq);
      }
     int ii=-1;
     int jj=-1;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((i==0 ||j==0 || i==n-1 || j==m-1)&&(vs[i][j]!='#')){
                if(vc[i][j]==-1)continue;

                if(vm[i][j]==-1){
                    ii=i;
                    jj=j;
                    break;
                }
                if(vc[i][j]<vm[i][j]){
                    ii=i;
                    jj=j;
                }
            }
        }
      }
      // cout<<ii<<" "<<jj<<endl;
      // for(int i=0;i<n;i++){
      //   for(int j=0;j<m;j++){
      //       cout <<vc[i][j]<<" ";
      //   }
      //   cout <<endl;
      // }
      // cout <<endl;
      // for(int i=0;i<n;i++){
      //   for(int j=0;j<m;j++){
      //       cout <<vm[i][j]<<" ";
      //   }
      //   cout <<endl;
      // }
      if(ii==-1){
        cout <<"NO"<<endl;
        return;
      }
      string ans="";

      while(moves[ii][jj]!='X'){
        ans=moves[ii][jj]+ans;
        if(moves[ii][jj]=='R'){
            jj--;
            continue;
        }
        if(moves[ii][jj]=='L'){
            jj++;
            continue;
        }
        if(moves[ii][jj]=='U'){
            ii++;
            continue;
        }
        if(moves[ii][jj]=='D'){
            ii--;
            continue;
        }
      }
      cout <<"YES"<<endl;
      cout <<ans.size()<<endl;
      cout <<ans<<endl;
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