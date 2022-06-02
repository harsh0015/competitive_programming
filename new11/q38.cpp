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
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    deque<int >dq;
    dq.push_front(arr[0]);

    for(int i=1;i<n;i++){
        if(arr[i]<dq.front())dq.push_front(arr[i]);
        else dq.push_back(arr[i]);
    }

    while(!dq.empty()){
        cout <<dq.front()<<" ";
        dq.pop_front();
    }

    cout <<endl;

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