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

ll n;
ll maxEvents(vector<vector<ll>> v) {
        
        sort(v.begin(),v.end());
   
        
        priority_queue<ll,vector<ll>,greater<ll>>pq;
        
        ll ans=0;
        ll i=0;
        ll n=v.size();
        
        for(int d=1;d<n+1;d++){
            
            while(!pq.empty() && pq.top()<d)pq.pop();
            
            while(i<n && v[i][0]==d){
                pq.push(v[i][1]);
                i++;
            }
            
            if(!pq.empty()){
                pq.pop();
                ans++;
            }
        }
        return ans;
    }
 
void solve(){

    cin>>n;

    vector<ll>v(n);

    for(ll i=0;i<n;i++)cin>>v[i];

    string s;cin>>s;

for(ll i=0;i<n;i++){
    if(v[i]<=0 && s[i]=='B'){
        cout <<"NO"<<endl;
        return;
    }
}

   vector<vector<ll>>task;

   for(ll i=0;i<n;i++){
    if(s[i]=='R'){
        vector<ll>v1;
        v1.push_back(max(v[i],ll(1)));
        v1.push_back(n);
        task.push_back(v1);
    }
    else{
        vector<ll>v1;
          v1.push_back(ll(1));
         v1.push_back(min(v[i],n));
      task.push_back(v1);
    }
   }
 
   if(maxEvents(task)==n){
    cout <<"YES"<<endl;
   }
   else cout <<"NO"<<endl;

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