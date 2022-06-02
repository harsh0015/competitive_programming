#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k;cin >>n>>k;

		int arrt[n+1];
		int arrl[n+1];
		int arrh[n+1];
		arrt[0]=0;

		for(int i=1;i<n+1;i++)cin >>arrt[i]>>arrl[i]>>arrh[i];

	   pair<int ,int> arr[n+1];
	bool flag=true;

	   for(int i=1;i<n+1;i++){


	   	if(i!=1){
	   	if(arrl[i]>=arrl[i-1]){
	   		k=min(arr[i-1].second,arrl[i]);
	   	}
	   	else {
	   		k=max(arr[i-1].first,arrh[i]);
	   	}
	   }
	   	// cout <<i<<"*"<<k<<endl;

	   	if(arrl[i]>=k)
	   	{
	   	int minr,maxr;
	   	int time=arrt[i]-arrt[i-1];

	   	minr=min(k+time,arrl[i]);
	   	maxr=min(k+time,arrh[i]);

	   	if(maxr<arrl[i]){
	   		flag=false;
	   		break;
	   	}
	   	pair<int ,int >p;p.first=minr;p.second=maxr;
	   	arr[i]=p;


	   }//endl of if

	   else {
            int minr,maxr;
	   	int time=arrt[i]-arrt[i-1];

	   	maxr=max(k-time,arrh[i]);
	   	minr=max(k-time,arrl[i]);

	   	if(minr>arrh[i]){
	   		flag=false;
	   		break;
	   	}
	   		pair<int ,int >p;p.first=minr;p.second=maxr;
	   	arr[i]=p;


	   }//end of else


	   }

	   if(flag )cout <<"YES"<<endl;
	   else cout <<"NO"<<endl;
	}
}