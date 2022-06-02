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

string decToBinary(int n)
{  string ans="";
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            ans=ans+"1";
        else
            ans=ans+"0";
    }

    return ans;
}
 
void solve(){
  
  int n;
  cin>>n;

 map<string,int>m;

  for(int i=0;i<n;i++){
    string s;cin>>s;
   m[s]++;
  }


int x;
  if(n>6){
    x=102;
  }
  else x=pow(2,n);

  for(int i=0;i<x;i++){
     int r=i;

     string check=decToBinary(i);

    int y=n;
    int co=31;

    string final="";
    while(y--){
        if(co>=0){
            final=check[co]+final;
            co--;
        }
        else final=final+"0";
      
  }

    if(m.find(final)==m.end()){
        cout <<final<<endl;
        return;
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