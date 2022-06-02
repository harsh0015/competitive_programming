#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n];

		for(int i=0;i<n;i++)cin >>arr[i];


		int count=0;

	for(int i=0;i<n-1;i++){
		if(2*min(arr[i],arr[i+1])<max(arr[i],arr[i+1])){

			for(int j=1;j<1000000;j++){
				if(min(arr[i],arr[i+1])*pow(2,j)>=max(arr[i],arr[i+1]))
					{
						break;}
						else count++;
				
			}
		}
	}

	cout <<count<<endl;
	}
}