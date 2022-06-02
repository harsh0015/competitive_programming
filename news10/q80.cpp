#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi (3.141592653589)
#define mod 1000000007
#define dd double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pura(v) v.begin(),v.end()
#define w(t) while(t--)
#define fl(i,a,b) for(int i=a;i<b;i++)
#define rfl(i,a,b) for(int i=a;i>=b;i--)
#define vi vector<int>
#define vll vector<long long int>
#define sp(x) setprecision(x)
#define Y "YES"
#define N "NO"

ll gcd(ll a, ll b)
{
    if (b == 0)
    return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    int n; cin>>n;
    vi v(n); fl(i,0,n) cin>>v[i];
    vector<int> s(n+1,0);
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=v[j];
            if(sum>n) break;
            if(j-i>0)
            {
                s[sum]=1;
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[v[i]]==1) ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    int t=1;
    cin>>t;
    w(t)
    {
        solve();
    } 
    return 0;
}