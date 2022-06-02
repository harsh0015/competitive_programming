#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n];

		for(int i=0;i<n;i++)cin >>arr[i];

		sort(arr,arr+n);

	int count=0;
	int i=0;int j=n-1;

	while(true){
		if(i>=j)break;


       if(arr[i]!=arr[j]){
       	count=count+2;
       	i++;j--;
       }
       if(arr[i]==arr[j])break;
	}

	cout <<n-count<<endl;
	}
}