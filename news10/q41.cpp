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

    ll n;cin>>n;

    ll arr[n];

    for(ll i=0;i<n;i++){
        cin>>arr[i];

        arr[i]=arr[i]%2;

    }
   if(n==1){
    cout <<0<<endl;
    return;
   }N
   
    ll odd=0,even=0;

for(ll i=0;i<n;i++){
    if(arr[i]%2==0)even++;
    else odd++;
}

if(abs(odd-even)>1){
    cout <<-1<<endl;
    return;
}
ll i=0;

ll ans=0;
ll look;

if(arr[0]==1)look=0;
else look=1;
ll co=0;

while(i<n){
   if(arr[i]!=look){

    co++;
   }
   else{
    
    if(co>1){
        ans=ans+co-1;
        co--;
    }
    else{
        look=(look+1)%2;
    }

   }
   i++;
}



if(arr[0]==1)look=0;
else look =1;


int h=0;
while(arr[h]!=look){
    h++;
}

ll ans1=0;

while(h>0){
    swap(arr[h],arr[h-1]);
    ans1++;
    h--;
}


i=0;




if(arr[0]==1)look=0;
else look=1;
 co=0;

while(i<n){
   if(arr[i]!=look){

    co++;
   }
   else{
    
    if(co>1){
        ans1=ans1+co-1;
        co--;
    }
    else{
        look=(look+1)%2;
    }

   }
   i++;
}






     cout <<min(ans,ans1)<<endl;


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