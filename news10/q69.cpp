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
typedef unsigned long long int ll;
typedef long double ld;


 
void solve(){

    ll n;cin>>n;
    ll arr[n];

    for(ll i=0;i<n;i++)cin>>arr[i];

        if(n==2){
            if(arr[0]!=arr[1]){
                cout <<"NO"<<endl;
            }
            else cout <<"YES"<<endl;

            return;
        }

        ll ans=arr[0];

      

       

        for(ll i=1;i<n;i++){
            ans=ans^arr[i];
        }

        if(ans==0)cout <<"YES"<<endl;
        else {
            int count=0;
            bool flag=true;


            int check=0;

            for(int i=0;i<n;i++){
                if(arr[i]==ans){

                    if(check!=0){
                        cout <<"NO"<<endl;
                        return;
                    }
                    count++;
                }
                else check=check^arr[i];

                if(check==ans){
                    check=0;
                    count++;
                }
            }

            if(check!=0 || count==1)cout <<"NO"<<endl;
            else cout <<"YES"<<endl;
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