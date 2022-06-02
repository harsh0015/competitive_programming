#include "bits/stdc++.h"
using namespace std;
 
#define GOING_TO_BE_A_GM ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl '\n'
#define inf 1000000000000000007
#define int long long
#define fi first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()


const int mod = 1e9 + 7;
const int N = 1e6 + 7;
int maxn = 100007;

void __solve(){ 
        int n; cin >> n;
        vi a(n + 2);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }   
        vi dpl(n + 2), dpr(n + 2);
        a[0] = -inf, a[n + 1] = inf;

        for(int i = 1; i <= n; i++){
            if(a[i] > a[i - 1]) dpl[i] = dpl[i - 1] + 1;
            else dpl[i] = 1;
        }
        for(int i = n; i >= 1; i--){
            if(a[i + 1] > a[i]) dpr[i] = dpr[i + 1] + 1;
            else dpr[i] = 1;
        }

        int ans = 1;
        for(int i = 1; i <= n; i++){
            ans = max({ans, dpl[i]});
            if(a[i - 1] < a[i + 1]){
                ans = max({ans, dpl[i - 1] + dpr[i + 1]});
            }
        }

        cout << ans << endl;

}

int32_t main(){

        GOING_TO_BE_A_GM;
        int t = 1;
        // cin >> t;
        for(int i = 1; i <= t; i++){
            // cout << "Case #" << i << ": ";
            __solve();
        }

}   