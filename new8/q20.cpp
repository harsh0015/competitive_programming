#include <iostream>

using namespace std;

const int MAXN = 2e5 + 5;

void solveTestcase()
{
    int n;
    int a[MAXN];

    cin >> n;
    for(int i = 0;i<n;i++) cin >> a[i];

    int ans = 0;
    for(int l = 0;l<n;l++)
    {
        for(int r = l;r<n;r++)
        {
            bool fail = false;
            for(int i = l;i<r;i++)
            {
                for(int j = i+1;j<r;j++)
                {
                    if(a[i]<=a[j] && a[j]<=a[r])
                    {
                        fail = true;
                        break;
                    }
                    if(a[i]>=a[j] && a[j]>=a[r])
                    {
                        fail = true;
                        break;
                    }
                }

                if(fail==true) break;
            }

            if(fail==false) ans++;
            else break;
        }
    }

    cout << ans << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);

    int T;
    cin >> T;

    while(T--) solveTestcase();
}


