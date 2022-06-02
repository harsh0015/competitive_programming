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

int arr[n+1];

for(int i=1;i<n+1;i++)cin>>arr[i];

int ans[n+1];

for(int i=1;i<n+1;i++)ans[i]=0;

 bool check[n+1];
for(int i=1;i<n+1;i++)check[i]=false;


unordered_map<int,int>m;
for(int i=1;i<n+1;i++){
    m[arr[i]]++;
  if(!check[arr[i]]){
    ans[i]=arr[i];
    check[arr[i]]=true;
  }
}

vector<int>v;
for(int i=1;i<n+1;i++){
    if(!check[i])v.push_back(i);
}

// for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

// cout<<endl;



int h=v.size()-1;


for(int i=1;i<n+1;i++){

    if(h<0)break;
    if(ans[i]==0){
        if(v[h]!=i){
               
              ans[i]=v[h];
              h--;
              continue;
        }
        else{

            h--;
            if(h>0){
                ans[i]=v[h];
              h--;
              continue;
            }
        }

          
    }
}
// for(int i=1;i<n+1;i++)cout <<ans[i]<<" ";

//     cout <<endl;
vector<int>left;

for(int i=1;i<n+1;i++){
    if(ans[i]==0)left.push_back(i);

}



for(int i=1;i<left.size();i=i+2){
    ans[left[i]]=left[i-1];
    ans[left[i-1]]=left[i];
}

bool flag=false;
int t;

for(int i=1;i<n+1;i++){
    if(ans[i]==0){
        flag=true;
       t=i;
    }
}

bool flag2=false;

if(!flag){
    int f=0;
for(int i=1;i<n+1;i++){
    if(arr[i]==ans[i])f++;
}

cout <<f<<endl;

for(int i=1;i<n+1;i++)cout <<ans[i]<<" ";

cout <<endl;

return;
}


if(flag){
    for(int i=1;i<n+1;i++){
        if(arr[i]!=ans[i] && i!=t){
            ans[t]=ans[i];
            ans[i]=t;
            flag2=true;
            break;
        }
    }
}
if(flag2){
    int f=0;
for(int i=1;i<n+1;i++){
    if(arr[i]==ans[i])f++;
}

cout <<f<<endl;

for(int i=1;i<n+1;i++)cout <<ans[i]<<" ";

cout <<endl;
return;
}
bool flag3=false;
if(!flag2 ){
    if(m[arr[t]]>1){
        // cout <<"ye"<<endl;
        for(int i=1;i<n+1;i++){
            if(ans[i]==arr[t]){
                ans[t]=ans[i];
                ans[i]=t;
                flag3=true;
                break;
            }
        }
    }
}

if(flag3){
    int f=0;
for(int i=1;i<n+1;i++){
    if(arr[i]==ans[i])f++;
}

cout <<f<<endl;

for(int i=1;i<n+1;i++)cout <<ans[i]<<" ";

cout <<endl;
return;
}

if(!flag3){
    if(t==1){
        ans[t]=ans[t+1];
        ans[t+1]=t;
    }
    else{
        ans[t]=ans[t-1];
        ans[t-1]=t;
    }
}

int f=0;
for(int i=1;i<n+1;i++){
    if(arr[i]==ans[i])f++;
}

cout <<f<<endl;

for(int i=1;i<n+1;i++)cout <<ans[i]<<" ";

cout <<endl;
 
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