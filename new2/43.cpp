#include<bits/stdc++.h>
using namespace std ;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr1[n+1],arr2[n+1];

		for(int i=1;i<=n;i++)cin >>arr1[i];

		for(int i=1;i<=n;i++)cin >>arr2[i];

		if(n==2){
			if(arr1[1]<arr1[2])cout <<0<<endl;

			else {
				if(arr2[1]>1)cout <<1<<endl;
				else cout <<2<<endl;
			}
		}

		else{
              int count=0;
             int arr3[n+1];
             for(int i=1;i<=n;i++){
             	arr3[arr1[i]]=arr2[i];
             }
              
              // for(int i=1;i<=n;i++)cout <<arr3[i]<<" ";

              // 	cout <<endl;

             int arr4[n+1];

             for(int i=1;i<=n;i++){
             	arr4[arr1[i]]=i;
             }

             for(int i=2;i<=n;i++){
             	if(arr4[i]>arr4[i-1])continue;

             	else {
             		int count1=arr4[i-1]-arr4[i]+1;

             		int r=ceil(float(count1)/float(arr3[i]));

             		// cout <<"("<<r<<")";
             		count=count+r;
             		arr4[i]=arr4[i]+r*arr3[i];
             	}
             }
             cout <<count<<endl;
		}
	}
}