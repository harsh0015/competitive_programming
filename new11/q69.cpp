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
    int n=s.length();

    if(s.length()==2){
        cout<<"er"<<endl;
        return;
    }
    else{
        string x="";
        for(int i=s.length()-1;i>n-3;i--){
            x=s[i]+x;
        }

        if(x=="er"){
            cout <<"er"<<endl;
            return;
        }

        string y="";
        
        for(int i=s.length()-1;i>n-4;i--){
            y=s[i]+y;
        }

        if(y=="ist"){
            cout <<"ist"<<endl;
            return;
        }

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