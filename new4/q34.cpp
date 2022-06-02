#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k;cin >>n>>k;

		int arr[n+1];

		for(int i=1;i<n+1;i++)cin >>arr[i];

			int arr2[n+1];
		arr2[1]=0;

		int no=0;

		for(int i=2;i<n;i++){
			if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){arr2[i]=arr2[i-1]+1;no++;}

			else arr2[i]=arr2[i-1];

		}

		if(no==0){
			cout <<1<<" "<<1<<endl;
			continue;
		}
		int peak=0;
		int l;

	for(int i=1;i<=n-k+1;i++){
        if(arr2[i+k-2]-arr2[i]>peak){
        	peak=arr2[i+k-2]-arr2[i];
         l=i;
        }
	}

	cout <<peak+1<<" "<<l<<endl;
	}
}