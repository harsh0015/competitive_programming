#include <bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<set>
using namespace std;
#define int long long int
#define endl '\n'
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define ss second
#define ff first
#define vpii vector<pii>
#define vvpii vector<vpii>
#define vvi vector<vi>
#define pb push_back
#define vs vector<string>
#define all(x) x.begin(),x.end()
#define mii map<int,int>
#define vd vector<double>
#define deb(x) cout<<#x<<" -> "<<x<<endl
#define rep(i,a,b) for(int i=a;i<b;i++)
int bs(int lo, int hi, int& m, vector<int>& B, int t){
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(B[mid]>=t){
            if(mid==0) return mid;
            if(B[mid-1]<t) return mid;
            else hi=mid-1;
        }
        else {
            if(mid==m-1) return m;
            else lo=mid+1;
        }
    }
}
void solve()
{
    int n,m,ta,tb,k;
    cin>>n>>m>>ta>>tb>>k;
    vi a(n,0),b(m,0);
    rep(i,0,n) cin>>a[i];
    rep(i,0,m) cin>>b[i];
    if(k>=n||k>=m){
        cout<<"-1"<<endl;
        return;
    }
    int ans=0;
    for(int i=0;i<=k;i++){
        int index=bs(0, m-1, m, b, a[i]+ta);
        if(index+k-i>=m){
                    ans=-1;
                    break;
                }
                ans=max(ans,b[index+k-i]+tb);
    }
    cout<<ans<<endl;
}

int32_t main()
{
    int t=1;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cin>>t;
    while(t--){
        solve();
    }
}