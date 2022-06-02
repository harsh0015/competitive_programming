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
 int k,n,m;cin>>k>>n>>m;

 int arr1[n],arr2[m];
 for(int i=0;i<n;i++)cin>>arr1[i];

 for(int i=0;i<m;i++)cin>>arr2[i];

vector<int>v;

for(int i=0;i<k;i++)v.push_back(1);

int i=0,j=0;
bool flag=true;
vector<int>ans;

while(i<n && j<m){
    if(arr1[i]==0){
        v.push_back(1);
        ans.push_back(arr1[i]);
        i++;
        continue;
    }
    else if(arr2[j]==0){
        v.push_back(1);
        ans.push_back(arr2[j]);
        j++;
        continue;
    }
    else if(arr1[i]<=v.size()){
        ans.push_back(arr1[i]);
        i++;
        continue;
    }
    else if(arr2[j]<=v.size()){
        ans.push_back(arr2[j]);
        j++;
        continue;
    }
    else {
        flag=false;
        break;
    }
}

while(i<n){
     if(arr1[i]==0){
        v.push_back(1);
        ans.push_back(arr1[i]);
        i++;
        continue;
    }
      else if(arr1[i]<=v.size()){
        ans.push_back(arr1[i]);
        i++;
        continue;
    }
      else {
        flag=false;
        break;
    }
}
while(j<m){
     if(arr2[j]==0){
        v.push_back(1);
        ans.push_back(arr2[j]);
        j++;
        continue;
    }
      else if(arr2[j]<=v.size()){
        ans.push_back(arr2[j]);
        j++;
        continue;
    }
      else {
        flag=false;
        break;
    }
}

if(!flag){
    cout <<-1<<endl;
}
else {
    for(int k=0;k<ans.size();k++)cout <<ans[k]<<" ";

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