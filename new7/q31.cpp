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
 int n,m,k;
 cin>>n>>m>>k;

 vector<pair<int,int>>v;

 for(int i=0;i<n*m;i++){
    int a,b;cin>>a>>b;
    v.push_back({a,b});
}

int low=0,high=n*m-1;

int ans=n*m;

while(low<=high){

    int mid=(low+high)/2;
    int arr[n+1][m+1];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
            arr[i][j]=0;

    for(int i=0;i<=mid;i++){
        if(i%2==0) arr[v[i].first][v[i].second]=1;
        else arr[v[i].first][v[i].second]=-1;
      
    }

    bool found=false;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=m;j++){
            arr[i][j]=arr[i][j]+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];

        }
    }

    for(int i=k;i<=n;i++)
        for(int j=k;j<=m;j++){

            int cnt=arr[i][j]-arr[i-k][j]-arr[i][j-k]+arr[i-k][j-k];

            if(abs(cnt)==k*k){
                found=true;
            }
        }

    if(found){
        ans=mid;
        high=mid-1;
    }
    else low=mid+1;

// cout <<" he"<<endl;

}


if(ans==m*n)cout <<"Draw"<<endl;
else if(ans%2==0)cout <<"Alice"<<endl;
else cout <<"Bob"<<endl;
 
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}