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

    string s;cin>>s;
    int arr[4][4];
    vector<pair<int,int>>ans;

    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            arr[i][j]=0;

    int n=s.length();
   int i=0;
    while(i<n){
        bool flag=false;
      for(int k=0;k<4;k++){
     
        for(int j=0;j<4;j++){
            if(s[i]=='0'){
               if(k<3){
                if(arr[k][j]==0 && arr[k+1][j]==0){
                    ans.push_back({k,j});
                    arr[k][j]=1;
                    arr[k+1][j]=1;
                    flag=true;
                    break;                }
               }
            }
            else{
                if(j<3){
                    if(arr[k][j]==0 && arr[k][j+1]==0){
                        ans.push_back({k,j});
                        arr[k][j]=1;
                        arr[k][j+1]=1;
                        flag=true;
                        break;
                    }
                }
            }
        }
        if(flag)break;

      }

      for(int k=0;k<4;k++){
        flag=true;
        for(int j=0;j<4;j++){
            if(arr[k][j]==0)flag=false;
        }
        if(flag){
            for(int j=0;j<4;j++){
            arr[k][j]=0;
        }
        }
      }
       

          for(int j=0;j<4;j++){
        flag=true;
        for(int k=0;k<4;k++){
            if(arr[k][j]==0)flag=false;
        }
        if(flag){
            for(int k=0;k<4;k++){
            arr[k][j]=0;
        }
        }
      }

        i++;
    }

    for(int i=0;i<n;i++){
        cout <<ans[i].first+1<<" "<<ans[i].second+1<<endl;
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