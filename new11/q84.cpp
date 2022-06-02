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

    ll x,n;cin>>x>>n;

    if(n==0){
        cout <<x<<endl;
        return;
    }

    if(x%2==0){
        if(n==1){
            cout <<x-1<<endl;
            return;
        }

        x=x-1;
        ll y=(n-1)/4;
        ll z=(n-1)%4;

        x=x+ (-4)*y;
        if(z==0){
            cout <<x<<endl;
            return;
        }
        if(z==1){
            cout <<x+n<<endl;
            return;
        }
        if(z==2){
            cout <<x+n-1+n<<endl;
            return;
        }
        if(z==3){
            cout <<x+n-2+n-1-n<<endl;
            return;
        }
    }

    else{
      
       if(n==1){
            cout <<x+1<<endl;
            return;
        }

        x=x+1;
        ll y=(n-1)/4;
        ll z=(n-1)%4;

        x=x+ (4)*y;
        if(z==0){
            cout <<x<<endl;
            return;
        }
        if(z==1){
            cout <<x-n<<endl;
            return;
        }
        if(z==2){
            cout <<x-n+1-n<<endl;
            return;
        }
        if(z==3){
            cout <<x-n+2-n+1+n<<endl;
            return;
        }
    }

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