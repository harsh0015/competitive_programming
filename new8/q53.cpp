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
bool CheckForSequence(ll arr[], ll n, ll k)
{
    // Traverse the array from end
    // to start
    for (ll i = n - 1; i >= 0; i--) {
        // if k is greater than
        // arr[i] then subtract
        // it from k
        if (k >= arr[i])
            k -= arr[i];
    }

    // If there is any subsequence
    // whose sum is equal to k
    if (k != 0)
        return false;
    else
        return true;
}

// Driver code
int main()
{

    ll n;cin>>n;
    ll arr[n];
    ll sum=0;
    for(ll i=0;i<n;i++){

        cin>>arr[i];
        sum=sum+arr[i];
    }

    sort(arr,arr+n);

    if(sum%2==1){
        cout <<"NO"<<endl;
        return 0;
    }
    


    cout << (CheckForSequence(arr, n, sum/2)
                ? "YES": "NO") << endl;
    return 0;
}
