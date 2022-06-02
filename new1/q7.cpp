// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// int main(){

// 	ll t;
// 	cin>>t;

// 	while(t--){
// 		ll n;
// 		cin >>n;

// 	vector<ll > v;

// 	v.push_back(0);
// 	v.push_back(2);

// 	for(ll i=2;i<n;i++){

// 		ll x;
// 		x=v[i-1]+i*2 + i-1;
// 		if(x<=n)
// 		 v.push_back(x);

// 		if(x>n)
// 			break;
// 	}
// 	ll sum=n;
//    ll i=v.size()-1;
	
//     // cout <<v[i]<<"#"<<endl;
// 	ll count =0;
    
// 	while(sum>0 &&i>0){
//      sum=sum-v[i];
//      if(sum>=0){
//        count ++;
//        i--;
//    }
//    else{
//    	sum=sum+v[i];
//    	i--;}
// 	}
// 	cout <<count <<endl;

// }
// }
#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,temp;
        cin >> n;
        int cards = n;
        if(n >= 2){
           int py = 0, prev,h;
           while(cards > 1){
              h=1,temp = 2;
              while(cards >= temp){
                  h++;
                  prev = temp;
                  temp = h*(3*h + 1);
                  temp /= 2;
              }
              cards -= prev;
              py++;
           }
           
           cout << py << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
    
    return 0;
}