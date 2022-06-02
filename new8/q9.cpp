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

int merge(int arr[], int temp[], int left, int mid, int right)
{
	int inv_count = 0;

	int i = left; /* i is index for left subarray*/
	int j = mid; /* i is index for right subarray*/
	int k = left; /* i is index for resultant merged subarray*/
	while ((i <= mid - 1) && (j <= right))
	{
		if (arr[i] <= arr[j])
			temp[k++] = arr[i++];
		else
		{
			temp[k++] = arr[j++];

			/* this is tricky -- see above explanation/
			diagram for merge()*/
			inv_count = inv_count + (mid - i);
		}
	}

	/* Copy the remaining elements of left subarray
	(if there are any) to temp*/
	while (i <= mid - 1)
		temp[k++] = arr[i++];

	/* Copy the remaining elements of right subarray
	(if there are any) to temp*/
	while (j <= right)
		temp[k++] = arr[j++];

	/*Copy back the merged elements to original array*/
	for (i=left; i <= right; i++)
		arr[i] = temp[i];

	return inv_count;
}


int _mergeSort(int arr[], int temp[], int left, int right)
{
	int mid, inv_count = 0;
	if (right > left)
	{
		/* Divide the array into two parts and call
		_mergeSortAndCountInv() for each of the parts */
		mid = (right + left)/2;

		/* Inversion count will be sum of inversions in
		left-part, right-part and number of inversions
		in merging */
		inv_count = _mergeSort(arr, temp, left, mid);
		inv_count += _mergeSort(arr, temp, mid+1, right);

		/*Merge the two parts*/
		inv_count += merge(arr, temp, left, mid+1, right);
	}

	return inv_count;
}


int countSwaps(int arr[], int n)
{
	int temp[n];
	return _mergeSort(arr, temp, 0, n - 1);
}


int main(int argv, char** args)
{

	int t;cin>>t;

	while(t--){
		int n;cin>>n;
		int arr[n];

		for(int i=0;i<n;i++)cin>>arr[i];

	
	if(countSwaps(arr,n)%2==0)cout <<"YES"<<endl;
else cout <<"NO"<<endl;
	}
	
	
}
