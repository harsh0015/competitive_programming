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

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

 
void solve(){

    int n;cin>>n;
    string s;cin>>s;

    for(int i=0;i<s.length();i++){
        int x=s[i]-'0';

        if(x==1 || x==4 || x==6 || x==8 || x==9){
            cout <<1<<endl;
            cout <<x<<endl;
            return;
        }
    }

cout<<2<<endl;

for(int i=0;i<s.length();i++){
    for(int j=i+1;j<s.length();j++){
        int x=s[i]-'0';
        int y=s[j]-'0';
        if(!isPrime(10*x+y)){
            cout <<10*x+y<<endl;
            return;
        }
    }
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