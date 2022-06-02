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

 
void solve(int h){
    cout <<"CASE #"<<h<<": ";

    string s;cin>>s;
    int n=s.length();
    int ans=INT_MAX;

    vector<char>v={'A','E','I','O','U' };

    for(int i=0;i<26;i++){
    string check="";
    for(int j=0;j<n;j++){
        check=check+ char('A'+i);
    }
    int count=0;
   

    for(int j=0;j<n;j++){
         if(s[j]==check[j])continue;

         else{

            int a=0,b=0;
            for(int k=0;k<5;k++){
                if(s[j]==v[k])a++;
                if(check[j]==v[k])b++;
            }

            if(a==b)count=count+2;
            else count++;
         }
    }
  
    ans=min(ans,count);

    }
     cout <<ans<<endl;


}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
    int i=0;
    while(t--){
        i++;
        solve(i);
    }
    return 0;
}