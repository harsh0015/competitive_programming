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

    sort(arr,arr+n);

   int sum=0;

   for(int i=0;i<n;i++)sum=sum+arr[i];

    if(sum%n!=0){
        cout <<-1<<endl;
        return;
    }
    bool flag=true;

    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            flag=false;
            break;
        }
    }

    if(flag){
        cout <<0<<endl;
        return;
    }

    int k=sum/n;

    for(int i=n-1;i>=0;i--){
        if(k>=arr[i]){
            cout << n-i-1<<endl;
            return;
        }
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