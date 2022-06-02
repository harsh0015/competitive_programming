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
#define ull unsigned long long
#define MODULO 1000000007

ull PowMod(ull n)
{
    ull ret = 1;
    ull a = 2;
    while (n > 0) {
        if (n & 1) ret = ret * a % MODULO;
        a = a * a % MODULO;
        n >>= 1;
    }
    return ret;
}

void solve(){
 ull n,m;cin>>n>>m;



 ull count=0;

  
    while(n>0){
          ull z=m;

        ull x=n%10;
        
        if(m+x<10){
            count++;
            n=n/10;
            continue;
        }
        else {

             z=z-(10-x);
            // cout <<"*"<<z<<endl;
            ull r=z/10;
            count=count+PowMod(r+1);

        }
        n=n/10;

    }
 
cout <<count<<endl;
 
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