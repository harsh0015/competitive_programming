#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >>t;

	while(t--){

		int n;cin>>n;

		int arr[n+1];

		int arr2[2*n+1];

		for(int i=1;i<2*n+1;i++)
			arr2[i]=0;

		for(int i=1;i<n+1;i++)
			{cin>>arr[i];
				arr2[arr[i]]=1;}
         
         int count=0;
	  for(int i=1;i<n+1;i++){
	  	// cout << arr[i]<<" ";
	  	for(int j=1;j<2*n+1;j++){
	  		if(j>arr[i]&& arr2[j]==0){
	  			// cout <<j<<" ";
	  			arr2[j]=1;
	  			count++;
	  			break;
	  		}
        
           	
	  	}
	  }
  cout <<count<<endl;

	}
}