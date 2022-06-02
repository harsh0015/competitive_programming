#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){
		int n;cin >>n;
		int arr[n];

		for(int i=0;i<n;i++)cin >>arr[i];

		unordered_map<int ,int>m;

	for(int i=0;i<n;i++){
m[arr[i]]++;
	}
   int check;
	for(auto i:m){
		if(i.second==1)
			check=i.first;
	}

for(int i=0;i<n;i++){
	if(arr[i]==check){
		cout <<i+1<<endl;
		break;
	}
	}
}
}