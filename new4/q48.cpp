#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){
		int n;cin >>n;

		int arr[n+1];

		for(int i=1;i<n+1;i++)cin >>arr[i];


			if(n==1){
				cout <<arr[1]<<endl;
				cout <<arr[1]<<endl;
				continue;
			}

		vector<int >v;

	v.push_back(1);

	for(int i=2;i<n+1;i++){
		if(arr[i]!=arr[i-1])v.push_back(i);

	}
	vector<int> mini,maxi;
	bool arr1[n+1],arr2[n+1];

	for(int i=1;i<n+1;i++){
		arr1[i]=false;
		arr2[i]=false;
	}

	// cout <<"????????"<<endl;

	// for(int i=0;i<v.size();i++)cout <<v[i]<<" ";

	// 	cout <<"?????"<<endl;



	for(int i=0;i<v.size()-1;i++){
		int a=v[i];
		int b=v[i+1];
		arr1[arr[a]]=true;
		arr1[arr[b]]=true;
		arr2[arr[a]]=true;
		arr2[arr[b]]=true;
		
		if(i==0){
		maxi.push_back(arr[a]);
		mini.push_back(arr[a]);}
		int count=b-a-1;
		int count1=b-a-1;

		for(int i=1;i<arr[b-1];i++){
			if(count==0)break;
			if(!arr2[i]){
				// cout <<"*"<<i<<endl;
				mini.push_back(i);
				arr2[i]=true;
				count--;}

				if(count==0)break;
		}
		for(int i=arr[b-1]-1;i>=1;i--){
			if(count1==0)break;
			if(!arr1[i]){
				maxi.push_back(i);
				arr1[i]=true;
				count1--;}

				if(count1==0)break;
		}
		mini.push_back(arr[b]);
		maxi.push_back(arr[b]);

	}

	for(int i=v[v.size()-1]+1;i<=n;i++){
		for(int i=1;i<n+1;i++){
			if(!arr2[i]){
				mini.push_back(i);
				arr2[i]=true;
				continue;
			}
		}
	}

	for(int i=v[v.size()-1]+1;i<=n;i++){
		for(int i=n;i>=1;i--){
			if(!arr1[i]){
				maxi.push_back(i);
				arr1[i]=true;
				continue;
			}
		}
	}

	for(int i=0;i<n;i++)cout <<mini[i]<<" ";

		cout <<endl;

for(int i=0;i<n;i++)cout <<maxi[i]<<" ";

		cout <<endl;



	}
}