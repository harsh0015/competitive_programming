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
 string s;cin>>s;
 int n;
 n=s.length();
 int k;cin>>k;

 int arr[n];

 for(int i=0;i<n;i++){
    arr[i]=1;
 }

 bool flag=true;

 for(int i=0;i<n;i++){
    if(s[i]=='0'){
        if(i+k<n){
            arr[i+k]=0;
        }
        if(i-k>=0){
            arr[i-k]=0;
        }
    }
     }

    for(int i=0;i<n;i++){
            // cout <<"hell"<<endl;

        if(s[i]=='1'){
            bool flag1=true,flag2=true;
            if(i+k<n){
            if(arr[i+k]==0)flag1=false;
            }
            else flag1=false;

            if(i-k>=0){
            if(arr[i-k]==0)flag2=false;
            }
            else flag2=false;


            // cout <<i<<" "<<flag1<<" "<<flag2<<endl;

            if(flag1||flag2)continue;

            else{
                flag=false;
                break;
            }
        }
    }

if(!flag){
    cout <<-1<<endl;
}
else{
    for(int i=0;i<n;i++)cout <<arr[i];

        cout <<endl;
}
 
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}