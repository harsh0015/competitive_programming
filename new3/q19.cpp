#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;
         int arr[n];
		for(int i=0;i<n;i++)cin >>arr[i];

		int arr1[n];

	for(int i=0;i<n;i++)arr1[i]=arr[i];

	unordered_map<int ,pair<int,int>>m;

    sort(arr1,arr1+n,greater<int>());


    for(int i=0;i<n;i++){
    	if(m.find(arr1[i])==m.end()){
    		pair<int ,int>p;
    		p.first=i;
    		p.second=1;
    		m[arr1[i]]=p;
    	}

    	else{
    		m[arr1[i]].second++;
    	}
    }

    for(int i=0;i<n;i++){
    	if(m[arr[i]].second==1){
    		cout <<m[arr[i]].first+1<<" ";
    	}
    	else {
    		cout <<m[arr[i]].first+1<<" ";
    		m[arr[i]].second--;
    		m[arr[i]].first=m[arr[i]].first+1;
    	}
    }

    cout <<endl;
	}
}