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

    ll n;cin>>n;
    vector<ll>v(2*n);
    for(ll i=0;i<2*n;i++)cin>>v[i];

        if(n==1){
            if(v[0]==v[1]){
                cout<<v[0]<<endl;
                return;
            }
            else{
                cout <<-1<<endl;return;
            }
        }
    


  sort(v.begin(), v.end());

    
    vector<ll>v1;
    v1.push_back(v[0]);

    for(ll i=1;i<2*n;i++){
      if(v[i]!=v[i-1])v1.push_back(v[i]);
    }

    if(v1.size()!=n){
        cout <<-1<<endl;
        return;
    }

    map<ll,ll>m;
    for(ll i=0;i<2*n;i++){
        m[v[i]]++;
    }
      
      if(n%2==1){
           if(m[v1[n-1]]!=1 || m[v1[n/2]]!=3){
            cout <<-1<<endl;
            return;
        }

        for(ll i=0;i<n-1;i++){
            if(i!=n/2){
                if(m[v1[i]]!=2){
                    cout <<-1<<endl;
                    return;
                }
            }
        }
      }
      else{
         if(m[v1[n-1]]!=1 || m[v1[n/2-1]]!=3){
            cout <<-1<<endl;
            return;
        }

        for(ll i=0;i<n-1;i++){
            if(i!=n/2-1){
                if(m[v1[i]]!=2){
                    cout <<-1<<endl;
                    return;
                }
            }
        }
      }
  
     

        for(ll i=0;i<n;i++){
            cout <<v1[i]<<" ";
        }
        cout <<endl;
    

  


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