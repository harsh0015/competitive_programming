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
 
 int arr[9][9];

 for(int i=0;i<9;i++){
    string s;cin>>s;

    for(int j=0;j<9;j++){
        arr[i][j]=s[j]-'0';
    }
 }
//  for(int i=0;i<9;i++){
//     for(int j=0;j<9;j++)cout <<arr[i][j];

//         cout <<endl;
// }
// cout <<endl;
 int nums[11];
for(int i=1;i<11;i++)nums[i]=0;

for(int i=0;i<9;i++){
    for(int j=0;j<9;j++){
       if(arr[i][j]==9)arr[i][j]=1;
        
    }
}

for(int i=0;i<9;i++){
    for(int j=0;j<9;j++)cout <<arr[i][j];

        cout <<endl;
}

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