// #include<bits/stdc++.h>
// typedef long long int ll;
// using namespace std;

// vector<ll> printDivisors(ll n) 
// {  vector<ll>v;
//     // Note that this loop runs till square root 
//     for (ll i=1; i<=sqrt(n); i++) 
//     { 
//         if (n%i == 0) 
//         { 
//             // If divisors are equal, print only one 
//             if (n/i == i) 
//                v.push_back(i); 
  
//             else // Otherwise print both 
//                 {
//                 	v.push_back(i);
//                 	v.push_back(n/i);
//                 } 
//         } 
//     } 

//     return v;
// } 

// int main()
// {
//  ll t;cin >>t;

//  while(t--){

//  	ll n;cin >>n;
    
//     vector<ll>v=printDivisors(n);

//      // cout <<v.size()<<endl;
//     bool flag=false;

//     for(ll i=0;i<v.size();i++){

//       ll c=v[i];
//      if(c==1)continue;
//       ll r=((4*n)/c - c*c);
//       if(r%3!=0)continue;
//       else r=r/3;

//       if(r<0)continue;

//       if(r==sqrt(r)*sqrt(r)){
//       	flag=true;
//       	break;
//       }
//     }

//     if(flag)cout <<"YES"<<endl;

//     else cout <<"NO"<<endl;

//  }
// }
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int t;
typedef long long ll;
 
int main(){
	cin>>t;
	while(t--){
		ll n;
		scanf("%lld",&n);
		int flag =  0;
		for(ll i=1;i<=10000;i++){
			if(i*i*i>=n)break;
			ll res = n-i*i*i;
			ll L=1,R=10000;
			ll ans = 0;
			while(L<=R){
				ll mid = (L+R)/2;
				if(mid*mid*mid<=res){
					L = mid+1;
					ans = mid;
				}else{
					R = mid-1;
				}
			}
			if(res == ans*ans*ans){
				flag =1;
				break;
			}
		}
		if(flag==0){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
} 
