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

    int arr[5];
    for(int i=0;i<5;i++)cin>>arr[i];

    int count1=0,count2=0;
    for(int i=0;i<5;i++){
    if(arr[i]==1)count1++;
    else if (arr[i]==2) count2++;
}
if(count1>count2)cout <<"INDIA"<<endl;
else if(count1==count2)cout <<"DRAW"<<endl;
else cout <<"ENGLAND"<<endl;

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