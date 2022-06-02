#include <iostream>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (abs(j - i) <= 1) cout << "1 ";
            else cout << "0 ";
        }
        cout << endl;
    }
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}