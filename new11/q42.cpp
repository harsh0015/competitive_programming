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
    char c;cin>>c;

    string s;cin>>s;
    int count=0;
    vector<int>v;


    for(int i=0;i<n;i++){
        if(s[i]==c)count++;
        else{
            v.push_back(i+1);
        }
    }

    if(count==n){
        cout<<0<<endl;
        return;
    }
   

    if(s[n-1]==c){
        cout <<1<<endl;
        cout <<n<<endl;
        return;
    }


    for(int i=1;i<n;i++){
        bool flag=true;
        for(int j=0;j<v.size();j++){
            if(v[j]%i==0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout <<1<<endl;
            cout <<i<<endl;
            return;
        }
    }


    cout <<2<<endl;
    cout <<n<<" "<<n-1<<endl;
    

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