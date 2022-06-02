#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n];

		for(int i=0;i<n;i++)cin >>arr[i];

		int m=0;
	    int i=0,j=0;

	    int cost=0;

	    while(i!=n-1 || j!=n-1){
	    	j++;
	    	if(arr[j]<=arr[i]){
	    		cost++;
	    	}
	    	else {

	    		m=max(m,cost);
	    		i++;
	    		j=i;
	    		cost=0;
	    	}

	    }

	    reverse(arr,arr+n);


	      cost=0;
	      i=0;
	      j=0;

	    while(i!=n-1 || j!=n-1){
	    	j++;
	    	if(arr[j]<=arr[i]){
	    		cost++;
	    	}
	    	else {

	    		m=max(m,cost);
	    		i++;
	    		j=i;
	    		cost=0;
	    	}

	    }



	    cout <<m<<endl;
	}
}