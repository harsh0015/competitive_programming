#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
using pss = pair<string, string>;
using pll = pair<ll, ll>;
using pls = pair<ll, string>;
using psl = pair<string , ll >;
#define endl '\n'
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;
#define IO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void show(vector<ll> &v) { for (auto it : v) cout << it << " "; cout << endl; }
const double PI = acos(-1);
const long long mod = 1e5;
int main()
{
    IO;
    ll i = 0 ,j = 0, n = 0, m = 0, k = 0, t = 0;
    cin>>n;
    vector<ll> v(n);
    for(i=0;i<n;i++)
    cin>>v[i];
    cout<<n+1<<endl;
    cout<<"1 "<<n<<" "<<mod<<endl;
    for(i=0;i<n;i++)
    v[i]+=mod;
    for(i=0;i<n;i++)
    {
        k=i;
        cout<<"2 "<<i+1<<" "<<v[i]-k<<endl;
    }
    return 0;
}