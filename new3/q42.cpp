#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define int long long
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << ", " << #y << "=" << y << endl;
#define all(x) x.begin(), x.end()
#define PI 3.1415926535897932384626
 
int n, p, k, x, y;
 
void Solve() {
	cin >> n >> p >> k;
	string s; cin >> s;
	cin >> x >> y;
 
	int dp[n + 1] = {0};
	int ans = 1e18;
	for (int i = n - 1; i >= 0; i--) {
		int res = y * i;
		dp[i] = 0;
		dp[i] = x * (s[i] == '0');
		if (i + k < n) dp[i] += dp[i + k];
		if (i + p - 1 < n)
			res += dp[i + p - 1];
 
		if (n - i >= p) ans = min(ans, res);
	}
 
	cout << ans << endl;
 
}
 
signed main() {
	FAST;
#ifndef ONLINE_JUDGE
	freopen("../input1.txt", "r", stdin);
	freopen("../output1.txt", "w", stdout);
#endif
 
	int tt; cin >> tt; while (tt--)
		Solve();
	return 0;
}
