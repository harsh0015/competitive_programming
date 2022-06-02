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
 
void solve()
{
string s;cin>>s;





 vector<ll>arr;



for(int i=0;i<s.length();i++){
    arr.push_back(s[i]-'0');
}
// reverse(arr.begin(), arr.end());




for(int i=0;i<arr.size();i++){
    if(arr[i]==8 ){
        cout <<"YES"<<endl;
        cout <<8<<endl;
        return;
    }

    if(arr[i]==0){
        cout <<"YES"<<endl;
        cout <<0<<endl;
        return;
    }
}
for(ll i=0;i<arr.size()-1;i++){
    for(ll j=i+1;j<arr.size();j++){
        ll x=10*arr[i]+arr[j];

       

        if(x%8==0){
            cout <<"YES"<<endl;
            cout <<x<<endl;
            return;

       
        }

        if((x+4)%8==0){


            bool flag=false;
             ll l;

        for(ll k=0;k<i;k++){
            if(arr[k]%2==1){
               
                flag=true;
                l=arr[k];
                break;
            }
        }

        if(flag){
            cout <<"YES"<<endl;
            cout <<100*l +x;
            return;
        }
        }


    }
}
    cout <<"NO"<<endl;

}
 
 
int main(){
    fastio;
 
    int t = 1;
   
    while(t--){
        solve();
    }
    return 0;
}