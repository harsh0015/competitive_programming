#include <bits/stdc++.h>

using namespace std;
  
const int maxtn = 1e6, maxt = 2e5, maxch = 1e6, maxeg = 1e6, maxA = 1e6, maxB = 1e6, maxC = 1e6;
int n, eg, ch, A, B, C;
long long solveFull(){
    long long ans = 1e18;
    for(int i = 0; i <= n; i++){
        long long req = n;
        if(i > eg || i > ch)break;
        long long egl = eg - i, chl = ch - i;
        long long canA = egl / 2, canB = chl / 3, canC = i;
        if(canA + canB + canC < n)continue;
        long long useC = min(canC, req);
        long long val = useC * C;
        req -= useC;
        if(A < B){
            long long useA = min(canA, req);
            val += useA * A;
            req -= useA;
            val += req * B;
            // cout << useA << " " << req << " " << useC << " " << val << endl;
        }else{
            long long useB = min(canB, req);
            val += useB * B;
            req -= useB;
            val += req * A;
        }
        ans = min(ans, val);
    } 
    return ans;
}
long long solvePartial(){
    long long ans = 1e18;
    for(long long useA = 0; useA <= n; useA++){
        for(long long useB = 0; useB + useA <= n; useB++){
            long long useC = n - useA - useB;
            long long egUsed = 2 * useA + useC, chUsed = 3 * useB + useC;
            if(chUsed > ch)break;
            if(egUsed > eg)continue;
            ans = min(ans, useA * A + useB * B + useC * C);
        }
    } 
    return ans;   
}
int main()
{ 
    int t; cin >> t; 
    int tn = 0;
    while(t--){
        cin >> n >> eg >> ch >> A >> B >> C;
        tn += n;
        long long ans = n <= 100 ? solvePartial() : solveFull(); 
        // long long ans = solvePartial(); 
        ans = (ans > 1e12 ? -1 : ans);
        cout << ans << endl;
    }
    assert(tn <= maxtn);
} 