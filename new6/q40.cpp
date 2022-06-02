#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;

	while(t--){
		int n,w;cin>>n>>w;

		int arr[n];

		for(int i=0;i<n;i++)cin>>arr[i];

		multiset<int>ms;

	   for(int i=0;i<n;i++)ms.insert(arr[i]);

	   	int left=w;
	   int height=1;

	   while(!ms.empty()){
         auto it=ms.upper_bound(left);
	   	if(it==ms.begin()){
	   		height++;
	   		left=w;
	   	}
	   	else{
	   		--it;
	   		left=left-*it;
	   		ms.erase(it);
	   	}
	   }
        
        cout <<height<<endl;
     }
 }
   
