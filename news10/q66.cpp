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
    int arra[n+1];
    int arrb[n+1];

    for(int i=0;i<n+1;i++){
        arra[i]=0;
        arrb[i]=0;
    }
    
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            arra[i+1]=arra[i]+1;
            arrb[i+1]=arrb[i];
        }
        else{
            arra[i+1]=arra[i];
            arrb[i+1]=arrb[i]+1;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arra[j+1]-arra[i]==arrb[j+1]-arrb[i]){
                cout <<i+1<<" "<<j+1<<endl;
                return;
            }
        }
    }
     
     cout <<-1<<" "<<-1<<endl;
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