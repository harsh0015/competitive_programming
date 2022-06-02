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
    vector<int>odd,even;

    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%2==1)odd.push_back(x);
        else even.push_back(x);
    }

    if(even.size()==0 || odd.size()==0){
        cout <<-1<<endl;
        return;
    }
    else{
        for(int i=0;i<odd.size();i++)cout <<odd[i]<<" ";

        for(int i=0;i<even.size();i++)cout <<even[i]<<" ";

        cout <<endl;
    return;
            
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