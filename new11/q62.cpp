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
    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    int sum=0;

    for(int i=0;i<n;i++)sum=sum+arr[i];

    if(sum%2==0){
        cout <<n<<endl;
        for(int i=0;i<n;i++)cout<<i+1<<" ";

        cout <<endl;
        return;
    }

    else{
        bool flag=false;

        for(int i=2;i<sum;i++){
            if(sum%i==0)flag=true;
        }

        if(flag){
            cout <<n<<endl;
            for(int i=1;i<n+1;i++)cout <<i<<" ";
                cout <<endl;
            return;
        }
        else{
            flag=true;
            cout <<n-1<<endl;
            for(int i=0;i<n;i++){
                if(arr[i]%2==1 && flag){
                    flag=false;
                    continue;
                }
                cout<<i+1<<" ";         
                   }
                   cout <<endl;
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