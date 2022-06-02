#include <bits/stdc++.h>
using namespace std;
#define inf 0x7fffffffffff
#define N 300000
#define mod 1000000007
#define ok printf("ok\n");
#define ios ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define der(a) printf("der=%lld\n",a);
#define ll long long
char c[N];
ll a[N][6];
int main()
{
    ll n,m;
    scanf("%lld%lld",&n,&m);
    scanf("%s",c+1);
    char d[3];
    d[0]='a';
    d[1]='b';
    d[2]='c';
    for(int i=0; i<6; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(c[j]!=d[j%3])
            {
                a[j][i]++;
            }
            a[j][i]+=a[j-1][i];
        }
        next_permutation(d,d+3);
    }
    while(m--)
    {
        ll l,r;
        scanf("%lld%lld",&l,&r);
        ll ans=inf;
        for(int i=0;i<6;i++)
        {
            ans=min(ans,a[r][i]-a[l-1][i]);
        }
        printf("%lld\n",ans);
    }
    return 0;
}
