#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pb push_back
const int md = 1000000007;

int x(string s, int k)
{
    // string s = to_string(n);
    string t = to_string(k);

    int n = s.length(), m = t.length();
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (c < m && s[i] == t[c])
            c++;
    }
    // c++;
    return m + n - 2 * c;
}

void solve()
{
    string n;
    cin >> n;
    int k = 1;
    int ans = INT32_MAX;
    // cout << x(n, 512) << endl;
    while (k <= ((int)1 << 61))
    {

         
        ans = min(ans, x(n, k));
        // cout << ans << " ";
        // cout << x(n, k) << endl;
        k *= 2;
    }
    cout << ans << endl;
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        solve();
}