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

    


 

void solve(){
    
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>v1;
    for(int i=0;i<n;i++)v1.push_back(v[i]);
        sort(all(v1));
    for(int k=0;k<n;k++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(v[j]!=v1[j])flag=false;
        }
        if(flag){
            cout <<"YES"<<endl;
            return;
        }
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1] ){
                if((v[i]+v[i+1])%2==0){
                    cout <<"NO"<<endl;
                return;
                }
                else swap(v[i],v[i+1]);    
            }
        }
    }
    
}
 
 //////
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
   for(int i=1;i<=t;i++){
    
    solve();
   }
    return 0;
}