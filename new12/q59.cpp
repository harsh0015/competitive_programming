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

 

void solve(){
     
   int n,a,b;cin>>n>>a>>b;

   if(n==2){
    if(a==0 && b==0){
        cout <<1<<" "<<2<<endl;
        return;
    }
    else {
        cout <<-1<<endl;
        return;
    }
   }
   if(abs(a-b)>1){
    cout <<-1<<endl;
    return;
   }

   if(a==0 && b==0){
    for(int i=1;i<=n;i++){
        cout <<i<<" ";
    }
    cout <<endl;
    return;
   }

   
   
   if(a==b){
      if(n<2*(a)+2){
        cout <<-1<<endl;
        return;
      }
      else{
        cout <<1<<" ";
        for(int i=2;i<=2*a+1;i++){
            if(i%2==0)cout <<i+1<<" ";
            else cout <<i-1<<" ";
        }
        for(int i=2*a+2;i<=n;i++)cout <<i<<" ";

            cout <<endl;
        return;
      }
   }
   else if(a>b){
    if(n<2*a+1){
        cout <<-1<<endl;
        return;
    }
    else{
        int x=n-2*a;
        cout<<x<<" ";
        int c=1;
        for(int i=x+1;i<=n;i++){
           if(c%2==1){
            cout <<i+1<<" ";
           }
           else cout <<i-1<<" ";
           c++;
        }
        for(int i=x-1;i>=1;i--)cout <<i<<" ";

        cout <<endl;
        return;
    }
   }
   else{
        if(n<2*b+1){
        cout <<-1<<endl;
        return;
    }
    else{
        
        int x=2*b+1;

         cout <<x<<" ";
         int c=1;
         for(int i=x-1;i>=1;i--){
            if(c%2==1)cout <<i-1<<" ";
            else cout <<i+1<<" ";

            c++;
         }
         for(int i=x+1;i<=n;i++)cout <<i<<" ";
            cout<<endl;
        return;

    }
   }

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