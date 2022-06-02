#include <bits/stdc++.h>

using namespace std;

signed main() {
   //ifstream cin("pairup.in");
   //ofstream cout("pairup.out");
   int n, ans = 1e9;
   cin >> n;
   string s;
   cin >> s;
   map<char, int> all;
   for (int i = 0; i < n; i++)
      all[s[i]]++;
   map<char, int> cnt;
   int l = 0, r = 0;
   while (r < n) {
      cnt[s[r]]++;
      while (cnt[s[l]] > 1) {
         cnt[s[l]]--;
         l++;
      }
      if (cnt.size() == all.size())
         ans = min(ans, r - l + 1);
      r++;
   }
   cout << ans << '\n';
   return 0;
}
