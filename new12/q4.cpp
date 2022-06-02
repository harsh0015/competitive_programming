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
    string s;cin>>s;
    cout <<n;
    
    for(int i=0;i<9;i++){

        
       string p="";
       for(int j=0;j<s.length()-1;j++){
        int x=int(s[j]-'0');
        int y=int(s[j+1]-'0');
      
      cout <<x<<" "<<y<<endl;
    
        if(x==i && y==(i+1)){
            p=p+char((i+2)%10 +'0');
            j++;
        }
        else{
            p=p+s[j];
        }

       }
       cout <<p<<endl;

        // swap(s,p);

    }
    cout <<s<<endl;
}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
    for(int i=1;i<=t;i++){
        cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}