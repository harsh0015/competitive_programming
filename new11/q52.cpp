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

    int arr[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            int both=0;
            int counti=0,countj=0;

            for(int k=0;k<n;k++){
                if(arr[k][i]==1 && arr[k][j]==1)both++;
                else if(arr[k][i]==1)counti++;
                else if(arr[k][j]==1)countj++;
                else continue;
            }

            if(counti + countj+both!=n)continue;
            int d=abs(counti-countj);
            if(d>both)continue;
            if((both-d)%2==0){
                cout <<"YES"<<endl;
                return;
            }
        }
    }

    cout <<"NO"<<endl;

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