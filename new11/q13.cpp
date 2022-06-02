// Problem: C. Ehab and Prefix MEXs
// Contest: Codeforces - Codeforces Round #649 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1364/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include <bits/stdc++.h>
#define x first
#define y second
#define IOS ios::sync_with_stdio(false);cin.tie(0);
#define lowbit(x) x&(-x)
#define INF 0x7fffffff
#define emp emplace_back
#define divUp(a,b) (a+b-1)/b
#define mkp(x,y) make_pair(x,y)
#define lb lower_bound
#define ub upper_bound
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef long double ld;
int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);};
bool checkP2(int n) {return n > 0 and (n & (n - 1)) == 0;};
const int N=100010;
int a[N];
int b[N];
bool st[N];
void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i],st[a[i]]=true;
    int j=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1 and a[i]!=a[i-1]) b[i]=0,st[0]=true;
        else{
            if(a[i]!=a[i-1]) b[i]=a[i-1];
            else{
                while(st[j]) j++;
                b[i]=j,st[j]=true;
            }
        } 
    }
    for(int i=1;i<=n;i++) cout<<b[i]<<' ';
    
}
int main() {
    IOS;
    solve();
    return 0;
}