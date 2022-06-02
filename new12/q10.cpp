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
    vector<string>v;
    for(int i=0;i<n;i++){
       string s;cin>>s;
       v.push_back(s);
    }
 

    set<string>st;
    
    for(int i=0;i<(1<<8);i++){
        vector<string>v1;
       

        for(int j=0;j<8;j++){
             if ((i&(1<<j))!=0) 
                v1.push_back(v[j]);
        }

        vector<int>v3(8,0);
        for(int k=0;k<v1.size();k++){
             for(int l=0;l<8;l++){
                if(v1[k][l]=='1')v3[l]++;
             }
        }

        string s="";
        for(int k=0;k<8;k++){
            if(v3[k]%2==0)s=s+"0";
            else s=s+"1";
        }

        st.insert(s);
    }

    

    for(auto x:st){
        cout <<x<<endl;
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
// 1
// 8
// 01111001
// 01110111
// 01001010
// 01000101
// 10101101
// 10100010
// 10011110
// 10010001