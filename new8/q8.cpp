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




void merge(pair<ll,ll> *Arr, ll start, ll mid, ll end) {
    // create a temp array
    pair<ll,ll> temp[end - start + 1];

    // crawlers for both intervals and for temp
    ll i = start, j = mid+1, k = 0;

    // traverse both arrays and in each iteration add smaller of both elements in temp 
    ll add=0;
    while(i <= mid && j <= end) {

        // cout <<i<<" "<<j<<" "<<add<<endl;
        if(Arr[i].first < Arr[j].first) {
            temp[k] = Arr[i];
            temp[k].second=temp[k].second+add;
            k += 1; i += 1;
        }
        else {
            temp[k] = Arr[j];
            temp[k].second=temp[k].second+mid-i+1;
            add++;
            k += 1; j += 1;
        }
    }

    // add elements left in the first interval 
    while(i <= mid) {
        temp[k] = Arr[i];
        temp[k].second=temp[k].second+add;
        k += 1; i += 1;
    }

    // add elements left in the second interval 
    while(j <= end) {
        temp[k] = Arr[j];
        k += 1; j += 1;
    }

    // copy temp to original interval
    for(i = start; i <= end; i += 1) {
        Arr[i] = temp[i - start];
    }
}

// Arr is an array of integer type
// start and end are the starting and ending index of current interval of Arr

void mergeSort(pair<ll,ll> *Arr, ll start, ll end) {

    if(start < end) {
        ll mid = (start + end) / 2;
        mergeSort(Arr, start, mid);
        mergeSort(Arr, mid+1, end);
        merge(Arr, start, mid, end);
    }
}
void solve(){
 ll n;cin>>n;
pair<ll,ll>arr[n];

 for(ll i=0;i<n;i++){
    ll x;cin>>x;
   arr[i]={x,0};
 }

mergeSort(arr,0,n-1);

for(int i=1;i<n;i++){
    if(arr[i].first==arr[i-1].first){
        if(arr[i].second%2==1 && arr[i-1].second%2==1){
            arr[i].second++;
            arr[i-1].second++;
        }
       
    }
}


bool flag=true;

for(ll i=0;i<n;i++){
    if(arr[i].second%2==1){
        flag=false ;
        break;
    }
}

if(flag)cout <<"YES"<<endl;
else cout <<"NO"<<endl;


 
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