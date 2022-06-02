#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){
		int n;cin >>n;

		int arr[n];

		for(int i=0;i<n;i++)
			cin >>arr[i];

		int e=0,o=0;

		for(int i=0;i<n;i++){
			if(arr[i]%2==0)e++;
			else o++;
		}

		if(e==n||o==n){cout <<0<<endl;
			continue;}

       cout <<(e>=o?o:e)<<endl;
	}
}