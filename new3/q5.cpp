// #include<bits/stdc++.h>
// using namespace std;

// typedef long long int ll;


// int main(){


// ll t;cin >>t;


// while(t--){


// 	ll n;cin >>n;

// 	ll arr1[n];

// 	ll arr[n];

// 	for(ll i=0;i<n;i++)
// 		{cin >>arr1[i];
//           arr[i]=arr1[i];
// 		}

// 	unordered_map<ll ,bool> m;


// 	sort(arr,arr+n);

// 	ll sum[n];
// 	sum[0]=arr[0];

// 	for(ll i=1;i<n;i++)sum[i]=sum[i-1]+arr[i];


// 	for(ll i=0;i<n-1;i++){
// 		if(sum[i]>=arr[i+1]){
// 			m[arr[i]]=true;
// 		}

// 		else m[arr[i]]=false;
// 	}
      
//       m[arr[n-1]]=true;

//       ll count=0;
//       for(ll i=0;i<n;i++){
// 		if(m[arr1[i]])count++;
// 	}
// cout <<count<<endl;
// 	for(ll i=0;i<n;i++){
// 		if(m[arr1[i]])cout <<i+1<<" ";
// 	}

// cout<<endl;


// }


// }
#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
int main(){
 
    ll t;
    cin>>t;
 
    // map<ll,ll> mp;
 
    while(t--){
 
        ll n;;
        cin>>n;
 
        pair<ll,ll> arr[n];
 
        ll x;
        ll sum=0;
 
        for(ll i=0;i<n;i++){
            cin>>x;
            arr[i]={x,i};
            sum+=x;
        }
 
        sort(arr,arr+n);
 
        // sum=arr[0].first;
 
        ll i=n-1;
        for( ;i>0;i--){
 
            sum-=arr[i].first;
            if(sum < arr[i].first){
                break;
            }
        }
 
        cout<<n-i<<endl;
 
        vector<ll> ans;
 
        for( ;i<n;i++){
            ans.push_back(arr[i].second+1);
        }
 
        sort(ans.begin(),ans.end());
 
        for(auto it: ans)
            cout<<it<<" ";
        cout<<endl;
 
        
    }
 
    return 0;
 
}
