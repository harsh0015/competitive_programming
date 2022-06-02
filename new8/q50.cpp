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
ll n,m;cin>>n>>m;

ll arr1[n][m],arr2[n][m];

for(ll i=0;i<n;i++)
    for(ll j=0;j<m;j++)
        cin>>arr1[i][j];

for(ll i=0;i<n;i++)
    for(ll j=0;j<m;j++)
        cin>>arr2[i][j];

bool flag=true;

for(ll i=0;i<n;i++){
    for(ll j=0;j<m-1;j++)
{
        if(arr1[i][j]<arr1[i][j+1] && arr2[i][j]<arr2[i][j+1])continue;
        else{
            if(arr1[i][j]<arr2[i][j+1] && arr2[i][j]<arr1[i][j+1]){
                ll t=arr1[i][j+1];
                arr1[i][j+1]=arr2[i][j+1];
                arr2[i][j+1]=t;
            }
            else{
                flag=false;
                break;
            }
        }
    }
    if(!flag)break;
}



for(ll j=0;j<m;j++){
    for(ll i=0;i<n-1;i++){
        if(arr1[i][j]<arr1[i+1][j] && arr2[i][j]<arr2[i+1][j])continue;
        else{
            if(arr1[i][j]<arr2[i+1][j] && arr2[i][j]<arr1[i+1][j]){
                ll t=arr1[i+1][j];
                arr1[i+1][j]=arr2[i+1][j];
                arr2[i+1][j]=t;
            }
            else{
                flag=false;
                break;
            }
        }
    }
    if(!flag)break;
}


// for(int i=0;i<n;i++){
//     for(int j=0;j<m-1;j++){
//         if(arr1[i][j]<arr1[i+1][j] && arr2[i][j]<arr2[i+1][j])continue;
//         else{
//             if(arr1[i][j]<arr2[i+1][j] && arr2[i][j]<arr1[i+1][j]){
//                 int t=arr1[i+1][j];
//                 arr1[i+1][j]=arr2[i+1][j];
//                 arr2[i+1][j]=t;
//             }
//             else{
//                 flag=false;
//                 break;
//             }
//         }
//     }
//     if(!flag)break;
// }

if(flag)cout <<"Possible"<<endl;
else cout <<"Impossible"<<endl;



 
}


int main(){
    fastio;

    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}