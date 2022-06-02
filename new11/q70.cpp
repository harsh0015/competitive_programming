#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ceel(x, y) ((x) / (y) + !((x) % (y) == 0))
#define ff first
#define ss second
#define endl '\n'
#define print(v) for(auto x : v) cout << x << ' '; cout << endl;
#define debug(v) cout << #v << " = "; print(v);
#define printmp(v) for(auto x : v) cout << x.first << ' ' << x.second << endl; cout << endl;
using namespace std;
typedef long long int ll;
typedef long double ld;


 
void solve(){

    int n,m;cin>>n>>m;

    int arr[n+1][m+1];
    for(int i=1;i<n+1;i++)
        for(int j=1;j<=m;j++)
            cin>>arr[i][j];

        bool flag=true;

    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++)
            for(int k=i+1;k<n+1;k++)
                for(int l=j+1;l<m+1;l++){
                    if(arr[i][j]+arr[k][l]>arr[i][l]+arr[k][j])flag=false;
                }
    }

    if(flag)cout <<"Yes"<<endl;
    else cout <<"No"<<endl;

}
 
 
int main(){
    fastio;
 
    int t = 1;
  
    while(t--){
        solve();
    }
    return 0;
}