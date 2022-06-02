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
int h,w;cin>>h>>w;

int arr[h+2][w+2];

for(int i=0;i<h+2;i++)
    for(int j=0;j<w+2;j++)
        arr[i][j]=0;

int count1=0,count2=0;

arr[1][1]=1;
for(int i=1;i<=h;i++)
    for(int j=1;j<=w;j++){
      
      if(arr[i][j]==1)continue;

      if(i==1 || j==1 || i==h || j==w){
        if(arr[i-1][j]==0 && arr[i][j-1]==0 && arr[i+1][j]==0 && arr[i][j+1]==0 && arr[i-1][j-1]==0 && arr[i-1][j+1]==0 && arr[i+1][j+1]==0 && arr[i+1][j-1]==0){
            arr[i][j]=1;
            count1++;
        }
      }
    }


    ////
int arr2[h+2][w+2];

    for(int i=0;i<h+2;i++)
    for(int j=0;j<w+2;j++)
        arr2[i][j]=0;



arr2[1][2]=1;
for(int i=1;i<=h;i++)
    for(int j=1;j<=w;j++){
      
      if(arr2[i][j]==1)continue;

      if(i==1 || j==1 || i==h || j==w){
        if(arr2[i-1][j]==0 && arr2[i][j-1]==0 && arr2[i+1][j]==0 && arr2[i][j+1]==0 && arr2[i-1][j-1]==0 && arr2[i-1][j+1]==0 && arr2[i+1][j+1]==0 && arr2[i+1][j-1]==0){
            arr2[i][j]=1;
            count2++;
        }
      }
    }
 
if(count1>count2){
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cout <<arr[i][j];

        }
        cout <<endl;
    }
}
else{
     for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cout <<arr2[i][j];

        }
        cout <<endl;
    }
}
}


int main(){
    fastio;

    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}