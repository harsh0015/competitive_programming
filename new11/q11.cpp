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

    map<pair<pair<int,int>,pair<int,int>>,int>m;

    int i=0;
    int x=0,y=0;
    int ans=0;
    while(i<s.length()){
        int x1=x,y1=y;
        if(s[i]=='N')y1++;
        else if(s[i]=='S')y1--;
        else if(s[i]=='E')x1++;
        else x1--;

        if(m.find({{x,y},{x1,y1}})!=m.end()  || m.find({{x1,y1},{x,y}})!=m.end() ){
           
            ans++;
        }
        else{
            m[{{x,y},{x1,y1}}]++;
            m[{{x1,y1},{x,y}}]++;
            ans=ans+5;

        }
        x=x1;
        y=y1;
        i++;
    }


cout <<ans<<endl;

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