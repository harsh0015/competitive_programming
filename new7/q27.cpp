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

 int arr[n+1][m+1];

 int count=0;
    for(int r=1;r<=n-k+1;r++){
        for(int t=1;t<=m-k+1;t++){
            count++;

        }
     
    }

 pair<int,int> dp[count+1];

 for(int i=1;i<=count;i++){
    pair<int,int>p;
    p.first=0;
    p.second=0;
    arr[i]=p;
 }



 for(int i=1;i<n+1;i++)
    for(int j=1;j<m+1;j++)
        arr[i][j]=0;


bool flag1=false,flag2=false;

for(int x=1;x<m*n+1;x++){
    int a,b;cin>>a>>b;
    if(x%2==1)arr[a][b]=1;
    else arr[a][b]=2;
        
    
    }
}

if(flag1)cout <<"Alice"<<endl;
else if(flag2) cout <<"Bob"<<endl;
else cout <<"Draw"<<endl;
 
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