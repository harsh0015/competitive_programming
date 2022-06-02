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

vector<int>pos,neg;

int sum=0;
for(int i=0;i<n;i++){
    if(arr[i]>=0){
        sum=sum+arr[i];
        pos.pb(arr[i]);
    }

    else neg.pb(arr[i]);
}
sort(neg.begin(),neg.end());
sort(pos.begin(),pos.end());


if(pos.size()==0){
  for(int i=neg.size()-1;i>=0;i--){
    if((-1*neg[i])%2==1){
        cout <<neg[i]<<endl;
        return;
    }
  }
  return;
}

if(sum%2==1){
    cout<<sum<<endl;
    return;
} 




int a,b;
int ans2=INT_MIN;


for(int i=0;i<pos.size();i++){
    if(pos[i]%2==1){
        a=pos[i];
        ans2=max(ans2,sum-a);
        break;
    }
}

for(int i=neg.size()-1;i>=0;i--){
    if((-1*neg[i])%2==1){
        b=neg[i];
        ans2=max(ans2,sum+b);
        break;
    }
}

cout <<ans2<<endl;

}


int main(){
    fastio;

    int t = 1;
       while(t--){
        solve();
    }
    return 0;
}