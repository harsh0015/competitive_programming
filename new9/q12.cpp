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
int n;cin>>n;

int arr[n+1][n+1];

for(int i=1;i<n+1;i++)
  for(int j=1;j<n+1;j++){
     arr[i][j]=0;
  }


int j=1;

for(int i=1;i<=n;i++){
    arr[i][n/2+1]=2*j-1;
    j++;
}



for(int i=1;i<=n;i++){
    // cout <<"l"<<endl;

    if(arr[n/2+1][i]==0){
        arr[n/2+1][i]= 2*j-1;
          j++;
    }
    
}
//  for(int i=1;i<n+1;i++){
//     for(int j=1;j<=n;j++){
//         cout <<arr[i][j]<<" ";
//     }
//     cout <<endl;
//  }
// cout <<endl;

// if(j< (n*n)/2+1){
//     for(int i=1;i<=n;i++){
//       if(arr[i][i]==0){
//         arr[i][i]=2*j-1;
//         j++;
//       }
//     }

//     for(int i=1;i<=n;i++){
//         if(arr[i][n+1-i]==0){
//             arr[i][n+1-i]=2*j-1;
//             j++;
//         }
//     }
// }
int x=1;
int r=n/2+1;

while(j<(n*n)/2+1){
   arr[r-x][r-x]=2*j-1;
   j++;
   arr[r-x][r+x]=2*j-1;
   j++;
   arr[r+x][r-x]=2*j-1;
   j++;
   arr[r+x][r+x]=2*j-1;
   j++;

   x++;
}

int k=1;

for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++){
        if(arr[i][j]==0){
            arr[i][j]=2*k;
            k++;
        }
    }
 

 for(int i=1;i<n+1;i++){
    for(int j=1;j<=n;j++){
        cout <<arr[i][j]%2<<"     ";
    }
    cout <<endl;
 }
}


int main(){
    fastio;

    int t = 1;
   
    while(t--){
        solve();
    }
    return 0;
}