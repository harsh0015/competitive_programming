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

     ll n, k, an1 = 0, an2 = 0, d2, d1;
        ll mi = 100000000;
 
        cin >> n;
 
        vector<ll> v(n);

        for(ll i=0;i<n;i++)cin>>v[i];


        sort(v.begin(), v.end());
 
        ll l = 1, r = n - 2;
        if (n == 2)
        {
            cout << 0 << endl;
            return ;
        }
        else if (n == 3)
        {
            cout << min(v[1] - v[0], v[2] - v[1]) << endl;
            return;
        }
         for(ll i=0;i<n-1;i++) an1 += abs(v[i] - v[(n - 1) / 2]);

        for (ll i = 1; i < n; i++)  an2 += abs(v[i] - v[1 + (n - 1) / 2]);

        mi = min(an1, an2);
 
        while (l < r)
        {
            d2 = v[n - 1] - v[l], d1 = v[r] - v[0];
            mi = min(mi, abs(d1 - d2));
            if (d1 < d2)
                l++;
            else
                r--;
        }
        cout << mi << endl;

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