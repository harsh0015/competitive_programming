#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n];
    int min;cin >>min;
  arr[0]=min;
    for(int i=1;i<n;i++){
    	cin >>arr[i];

    	if(arr[i]<min)min=arr[i];
    }


    int count=0;


    for(int i=0;i<n;i++)if(arr[i]==min)count++;


    	cout <<n-count<<endl;
	}
}