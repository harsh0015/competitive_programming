#include <bits/stdc++.h>
using namespace std;
 
void solve() {
  vector<string> s(9);
  for (int i = 0; i < 9; ++i) {
    cin >> s[i];
    for (int j = 0; j < 9; ++j) {
      if (s[i][j] == '9')
        s[i][j] = '1';
    }
  }
  for (auto i: s) {
    cout << i << "\n";
  }
}
 
int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}