#include<bits/stdc++.h>
using namespace std;

queue<int> q;

void solve(int arr[],int r){

	
	if(r<0)return;

if(r==0){q.push(arr[r]);return ;}

int max=arr[0];

int index=0;

for(int i=0;i<=r;i++){
	if(max<arr[i]){
		max=arr[i];
		index=i;
	}

    
}

for(int i=index;i<=r;i++)q.push(arr[i]);

solve(arr,index-1);
}

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n];

		for(int i=0;i<n;i++)cin >>arr[i];

		
   solve (arr,n-1);
  // vector<int>v;

    while(!q.empty()){
    	int x=q.front();
    	q.pop();
       // v.push_back(x);
    	cout <<x<<" ";
    }
cout <<endl;
    // int sum=0;

    // for(int i=0;i<n;i++){
    // 	sum=sum+v[i]*pow(n,n-i-1);
    // }


    // cout <<sum<<endl;
	}
}