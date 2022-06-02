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
#define  long long int  ll;
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

void solve()
{
 ll n;cin>>n;

 vevtor<ll>v;

while(n){
    v.pb(n%10);
    n=n/10;
}

for(ll i=0;i<n-1;i++){
    for(ll j=i+1;j<n;j++){
        ll x=10*arr[i]+arr[j];

        if(x%8==0){
            cout <<x<<endl;
            return;

        //       bool flag=false;
        //        int l;

        // for(int k=0;k<i;k++){
        //     if(arr[k]%2==0){
        //         flag=true;
        //         l=arr[k];
        //         break;
        //     }
        // }

        // if(flag){
        //     cout <<100*l +x;
        // }
        }

        if((x+4)%8==0){
            bool flag=false;
             int l;

        for(ll k=0;k<i;k++){
            if(arr[k]%2==1){
                flag=true;
                l=arr[k];
                break;
            }
        }

        if(flag){
            cout <<100*l +x;
            return;
        }
        }


    }
}
    cout <<"NO"<<endl;

}

int32_t main()
{
    int t=1;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    while(t--){
        solve();
    }
}