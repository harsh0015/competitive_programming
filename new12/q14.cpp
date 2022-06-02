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
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];

   int i=0;
    int j=n-1;

    while( i<=j && v[i]==v[j]){
        i++;
        j--;
    }

    if(i>j){
        cout <<"YES"<<endl;
        return;
    }

    int a=v[i];
    int b=v[j];

    i=0;j=n-1;
    
    while(i<=j){
        if(v[i]==v[j]){
            i++;
            j--;
        }
        else{
            if(v[i]==a){
                i++;
                continue;
            }
            else if(v[j]==a){
                j--;
                continue;
            }
            else break;
        }
    }

    if(i>j){
        cout <<"YES"<<endl;
        return;
    }

    i=0;j=n-1;
    
    while(i<=j){
        if(v[i]==v[j]){
            i++;
            j--;
        }
        else{
            if(v[i]==b){
                i++;
                continue;
            }
            else if(v[j]==b){
                j--;
                continue;
            }
            else break;
        }
    }

     if(i>j){
        cout <<"YES"<<endl;
        return;
    }

    cout <<"NO"<<endl;

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