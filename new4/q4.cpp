#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){
		int n;cin >>n;

		int arr[n];

		for(int i=0;i<n;i++)cin >>arr[i];

		int maxi=0;
	vector<int >v;

	for(int i=n-1;i>=0;i--){
       
       maxi=max(maxi,arr[i]);
       if(maxi>0){
       	v.push_back(1);
       	maxi--;
       }
       else {
       	v.push_back(0);
       }
	}

	reverse(v.begin(), v.end());


	for(int i=0;i<n;i++)cout <<v[i]<<" ";

		cout <<endl;
	}
}