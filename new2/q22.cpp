#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;
        string s;cin >>s;
		int arr[n+1];

		for(int i=1;i<n+1;i++)
		{
			if(s[i-1]=='1')arr[i]=1;
			else arr[i]=0;
		}

			int arr1[n+1],arr0[n+1];
		arr1[0]=0;
		arr0[0]=0;

		for(int i=1;i<n+1;i++){
			if(arr[i]==1){
				arr1[i]=arr1[i-1]+1;
				arr0[i]=arr0[i-1];
			}
			else{
				arr0[i]=arr0[i-1]+1;
				arr1[i]=arr1[i-1];
			}
		}


		int one=arr1[n];

	    int zero=arr0[n];

	    int m=n;

	    for(int i=1;i<=n;i++){
	    	int r=arr1[i-1]+arr0[n]-arr0[i];
	    	m=min(m,r);
	    }

	    cout <<m<<endl;
	}
}