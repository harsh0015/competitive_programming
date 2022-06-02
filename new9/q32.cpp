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

int n,m1;cin>>n>>m1;

map<int,int>m;

int counter=0;

while(m1--){
  int a,b;cin>>a>>b;


  if(a>b){
    m[b]++;
  }
  else m[a]++;

}



int q;cin>>q;

while(q--){
    int t;cin>>t;

    if(t==1){
        int a,b;cin>>a>>b;   
        
         if(a>b){
    m[b]++;
  }
  else m[a]++;

    }

    else if(t==2){
       int a,b;cin>>a>>b;
      
       if(a>b){
        if(m[b]==1){
            m.erase(b);
        }
        else m[b]--;
        
      }
      else {
        if(m[a]==1){
            m.erase(a);
        }
        else m[a]--;
      }

    }


else{
     cout <<n-m.size()<<endl;
}



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