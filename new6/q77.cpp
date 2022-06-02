// Efficient C++ program to count number of elements
// with values in given range.
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

typedef long long int ll;

// function to find first index >= x
ll lowerIndex(ll arr[], ll n, ll x)
{
	ll l = 0, h = n - 1;
	while (l <= h) {
		ll mid = (l + h) / 2;
		if (arr[mid] >= x)
			h = mid - 1;
		else
			l = mid + 1;
	}
	return l;
}

// function to find last index <= y
ll upperIndex(ll arr[], ll n, ll y)
{
	ll l = 0, h = n - 1;
	while (l <= h) {
		ll mid = (l + h) / 2;
		if (arr[mid] <= y)
			l = mid + 1;
		else
			h = mid - 1;
	}
	return h;
}

// function to count elements within given range
ll countInRange(ll arr[], ll n, ll x, ll y)
{       if(x>y)return 0;
	// initialize result
	ll count = 0;
	count = upperIndex(arr, n, y) - lowerIndex(arr, n, x) + 1;
	return count;
}

// driver function
int main()
{    
	ll t;cin>>t;

	while(t--){
		ll n,l,r;cin>>n>>l>>r;
		ll arr[n] ;

		for(ll i=0;i<n;i++)cin>>arr[i];

	

	
	sort(arr, arr + n);

	// Answer queries
ll ans=0;

    for(ll i=0;i<n-1;i++){
       if(2*arr[i]>r)break;

       // int m=max(arr[i]+1,l-arr[i]);

       if(arr[i]>=l-arr[i]){
       	if(countInRange(arr,n,arr[i],r-arr[i])-1)
       	  ans=ans+countInRange(arr,n,arr[i],r-arr[i])-1;
       	 // cout <<arr[i]<<" "<<countInRange(arr,n,arr[i],r-arr[i])-1<<endl;
       }
       else{

        ans=ans+countInRange(arr,n,l-arr[i],r-arr[i]);
        // cout <<arr[i]<<" "<<countInRange(arr,n,l-arr[i],r-arr[i])<<endl;
       }

       // cout <<arr[i]<<" "<<countInRange(arr,n,l-arr[i],r-arr[i])<<endl;

    }
	
	cout <<ans<<endl;
	}
	
}
