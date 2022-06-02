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

    int n,q;cin>>n>>q;

    int arr[2][n+1];
    for(int i=1;i<=n;i++){
      arr[0][i]=0;
      arr[1][i]=0;
    }

 
     
     int bar=0;

     while(q--){
        
        int r,c;cin>>r>>c;
        r--;

         if(arr[r][c]==0){
            if(arr[(r+1)%2][c]==1){
                // cout <<"ye"<<endl;
                bar++;
            }
            if(c>1){
                if(arr[(r+1)%2][c-1]==1)bar++;
            }
            if(c<n){
                if(arr[(r+1)%2][c+1]==1)bar++;
            }

            arr[r][c]=1;
         }
         else{
             if(arr[(r+1)%2][c]==1)bar--;
            if(c>1){
                if(arr[(r+1)%2][c-1]==1)bar--;
            }
            if(c<n){
                if(arr[(r+1)%2][c+1]==1)bar--;
            }

            arr[r][c]=0;
         }

         if(bar>0){
            cout <<"No"<<endl;
         }
         else cout <<"Yes"<<endl;

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