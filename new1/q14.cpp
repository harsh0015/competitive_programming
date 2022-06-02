// #include<bits/stdc++.h>
// using namespace std;

// vector<int> fact(int n){

// 	vector<int> v;

// 	for(int i=1;i<sqrt(n);i++){
// 		if(n%i==0){
// 			v.push_back(i);
// 			if( n/i != i)
// 				v.push_back(n/i);
// 		}
// 	}
// 	v.push_back(n);
// 	return v;
// }

// int main(){

// int n,m;
// cin >>n>>m;

// int arr1[n];
// for(int i=0;i<n;i++)
// 	cin >>arr1[i];

// int arr2[m];

// for(int i=0;i<m;i++)
// 	cin >>arr2[i];




// for(int k=0;k<m;k++){
// 	int arr3[n+1];

// 	for(int r=0;r<n;r++)
// 		arr3[r]=arr1[r]+arr2[k];

// sort(arr3,arr3+n);
// // cout <<"#"<<arr3[0]<<endl;
// vector<int > v=fact(arr3[0]);

// // cout <<"$"<<v[v.size()-1]<<endl;

// for(int i=v.size()-1;i>=0;i--){
//     bool flag=true;
//     for(int j=0;j<n;j++){

//     	if(arr3[j]%v[i]!=0){
//     		flag=false;
//     		break;
//     	}
//     }

//     	if(flag){
//     		cout <<v[i]<<" ";
//     		break;
//     	}
// }

// }
// }
#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
int n, m;
long long a[200000], b[200000];
 
long long gcd(long long a, long long b);
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
 
    long long g = 0;
    for (int i = 1; i < n; i++) {
        g = gcd(max(g, a[i] - a[0]), min(g, a[i] - a[0]));
    }
 
    for (int i = 0; i < m; i++) {
        cout << abs(gcd(max(g, a[0] + b[i]), min(g, a[0] + b[i]))) << " ";
    }
 
    cout << '\n';
 
    return 0;
}
 
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}
