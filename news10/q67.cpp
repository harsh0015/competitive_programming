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

    pair<int,int>pos;
    pos.first=0;
    pos.second=0;
    m[pos]=0;

    pair<int,int>ans;
    int len=INT_MAX;

    for(int i=0;i<n;i++){
         if(s[i]=='L'){
            pos.first=pos.first-1;
         }
         else if(s[i]=='R'){
           pos.first=pos.first+1;
         }
         else if(s[i]=='U'){
            pos.second=pos.second+1;
         }
         else{
            pos.second=pos.second-1;
         }

         if(m.count(pos)==0){
            m[pos]=i+1;
         }
         else{
            if(i-m[pos]<len){
                len=i-m[pos];
                ans.first=m[pos];
                ans.second=i+1;
            }
            m[pos]=i+1;
         }
    } 
   if(len!=INT_MAX)
   cout <<ans.first+1<<" "<<ans.second<<endl;

    else cout <<-1<<endl;
}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
    while(t--){
        solve();
    }
    return 0;
}