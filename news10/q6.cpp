#include<bits/stdc++.h>
#define ll long long
#define T int t;cin>>t;while(t--)
#define f(i,n) for(i;i<n;i++)
#define usual  i,t,n;
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
ll n,i,a[2000200],pa[200200],cnt = 1,vis[200200];
void dfs(int x)
{
    if(vis[x])
      return;
    vis[x] = true;
    cnt++;
    dfs(a[x]);
    pa[x] = cnt;
}
void solve()
{
    cin >> n>>m;
    for(int i = 0;i<n+2;i++){
        vis[i]=false;
    }
    i = 1;
    f(i,n+1){
    cin >> a[i];
    pa[i] = -1;
    }
    i = 1;
    f(i,n+1)
    {
        cnt = 0;
        if(pa[a[i]] == -1)
            dfs(i);
    }
    i = 1;
    f(i,n+1)
    {
        cout << pa[i] << " ";
    }
}
int main()
{
    T
    {
        solve();
        cout << endl;
    }
}
