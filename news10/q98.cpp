#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    assert(n >= 3);
    int k; cin >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int sum = accumulate(a.begin(), a.end(), 0LL);
    if (sum == 0) {
        cout << 0 << '\n';
        return;
    }
    vector<int> time(n);
    int L = -n;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > 0) {
            L = -(n - i);
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            L = i;
        }
        time[i] = i - L;
    }
    int R = 2 * n;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            R = n + i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] > 0) {
            R = i;
        }
        time[i] = min(time[i], R - i);
    }
    int ans = sum;
    for (int i = 0; i < n; i++) ans += 2 * max(0LL, k - time[i]);
    cout << ans << '\n';
}

signed main() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}