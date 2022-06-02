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

void solve(){
 int n;cin>>n;

 string s;cin>>s;

 map<pair<int,int>,int>m;

 int d=0,k=0;

 for(int i=0;i<n;i++){
   if(s[i]=='D')d++;
   else k++;

   int D=d/__gcd(d,k);
   int K=k/__gcd(d,k);

   if(m.find({D,K})!=m.end())m[{D,K}]++;

   else m[{D,K}]=1;

   cout <<m[{D,K}]<<" ";
 }
 cout <<endl;
 
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}