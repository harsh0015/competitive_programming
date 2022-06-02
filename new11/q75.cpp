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

    int ans=n;
    bool flag1=false;

    for(int k=0;k<26;k++){
        char x='a'+k;
        bool flag=true;
        int i=0,j=n-1;
        int count=0;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
                continue;
            }
            else{
                if(s[i]==x){
                    count++;
                    i++;
                    continue;
                }
                else if(s[j]==x){
                    count++;
                    j--;
                    continue;
                }
                else {
                    flag=false;
                    break;
                }
        }

    }

    if(flag){
        flag1=true;
        ans=min(ans,count);
    }

}

if(flag1)cout <<ans<<endl;
else cout<<-1<<endl;

    

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