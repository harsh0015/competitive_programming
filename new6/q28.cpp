#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin>>t;

	while(t--){

		int n,k;cin>>n>>k;

		int arr[n];

		for(int i=0;i<n;i++)cin>>arr[i];

	  if(k==1){
	  	int sum=0;
	  	int m=0;

	  	
	  		int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
  cout <<max_so_far<<endl;
	  		
	  	}

	  	if(k==2){
	  		int ans=INT_MIN;
	  		for(int i=1;i<n;i++){
	  			int sum1=0;
	  	int m1=0;

	  	
	  		int max_so_far1 = INT_MIN, max_ending_here1 = 0;
 
    for (int j = 0; j<i; j++)
    {
        max_ending_here1 = max_ending_here1 + arr[j];
        if (max_so_far1 < max_ending_here1)
            max_so_far1 = max_ending_here1;
 
        if (max_ending_here1 < 0)
            max_ending_here1 = 0;
    }

    ////

int max_so_far2 = INT_MIN, max_ending_here2 = 0;
 
    for (int j = i; j<n; j++)
    {
        max_ending_here2 = max_ending_here2 + arr[j];
        if (max_so_far2 < max_ending_here2)
            max_so_far2 = max_ending_here2;
 
        if (max_ending_here2 < 0)
            max_ending_here2 = 0;
    }
     int gg=max_so_far1 +2*max_so_far2;

     if(gg<ans)break;
     else ans=gg;



	  		}

	  		cout <<ans<<endl;

	  	}

	}
}