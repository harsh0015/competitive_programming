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

vector<int>ser;
 
void solve(){

  

int n;cin>>n;

for(int i=0;i<=n;i++){
    cout <<ser[i]<<" ";
}

cout <<endl;

}
 
 
int main(){
    fastio;

    ser.push_back(1);
    int count=1;

    int len=1;

    while(len<1010){
        count++;
        ser.push_back(count);

        int x=0;

        while(x<len){
            ser.push_back(ser[x]);
            x++;
        }
        len=2*len+1;
    }

   
 
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}