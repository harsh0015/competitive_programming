#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,d;cin >>n>>d;

		int arr[n];

		for(int i=0;i<n;i++)
			cin >>arr[i];

		sort(arr,arr+n);

		bool flag=true;

		for(int i=0;i<n;i++){
			if(arr[i]>d)
				flag=false;
		}
		if(flag)
		{
			cout <<"YES"<<endl;
			continue;
		}

		else{
			int sum=arr[0]+arr[1];

			if(sum <=d)
			{
				cout<<"YES"<<endl;
				continue;
			}
			cout <<"NO"<<endl;
		}
	}
}