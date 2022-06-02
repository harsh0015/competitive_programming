#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define T int t;cin>>t;while(t--)
#define mod 1000000007
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
const int N = (int)2e5 + 5;
int n;
char s[N];
int solve()
{
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            if (s[i] != 'B' and s[i + 2] != 'B')
                s[i + 1] = 'B';
            if (s[i] != 'G' and s[i + 2] != 'G')
                s[i + 1] = 'G';
            if (s[i]!= 'R' and s[i + 2] != 'R')
                s[i + 1] = 'R';
            ans++;
        }
    }
    cout << ans << '\n';
    for (int i = 0; i < n; i++)
        cout << s[i];
    return 0;
}
int main()
{
    FAST
    solve();
}