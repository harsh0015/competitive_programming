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

    int n,m;
    cin>>n>>m;
    if(n<m)swap(n,m);

    

    if(n==1 || m==1){
        cout <<max(n/2,m/2)<<endl;
        return;
    }

    if(n%2==1){
        cout <<(n/2)*m<<endl;
        return;
    }
    if(m%2==1){
        cout <<(m/2)*n<<endl;
        return ;
    }

    if(n==2 && m==2){
        cout <<2<<endl;
        return;
    }

    if(n<m)swap(n,m);

    cout <<m/2+ m*((n-1)/2)<<endl;

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