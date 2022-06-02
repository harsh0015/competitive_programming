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
    
    cin.ignore();

    int n,k;cin>>n>>k;
    vector<int>v(k);
    for(int i=0;i<k;i++)cin>>v[i];

    vector<vector<int>>adj(n+1);

    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    queue<int>q1;
    q1.push(1);

    queue<int>q2;
      map<int,int>m1;
     map<int,int>m2; 

    for(auto i:v){
        q2.push(i);
    }
   
    
   
    while(!q1.empty() && !q2.empty()){
         
         queue<int>q4,q3;

         while(!q2.empty()){
            int i=q2.front();
              q2.pop();
            if(m2.find(i)!=m2.end())continue;

            m2[i]++;
          
            for(auto j: adj[i]){
                if(m2.find(j)==m2.end()){
                      q4.push(j);
                }
            }
         }
         while(!q1.empty()){
              int i=q1.front();
               q1.pop();
              if(m1.find(i)!=m1.end())continue;
              if(m2.find(i)==m2.end() && i!=1 && adj[i].size()==1){
                cout <<"YES"<<endl;
                return;
              }
              m1[i]++;

           
            for(auto j: adj[i]){
                if(m1.find(j)==m1.end()){
                      q3.push(j);
                }
            }
         }
         swap(q1,q3);
         swap(q2,q4);
    }

    cout <<"NO"<<endl;

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