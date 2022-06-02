#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,k;cin >>n>>k;

	int arr[n+1];
	arr[1]=0;

	for(int i=0;i<n-1;i++){
		int a,b;
		cin >>a>>b;
		arr[b]=a;
	}

	unordered_map<int ,int >m;

	for(int i=2;i<n+1;i++){
		if(m.find(arr[i])==m.end())
			m[arr[i]]=1;
		else m[arr[i]]++;
	}

	int count=0;

	for(int i=1;i<n+1;i++){
        
        if(m.find(i)==m.end())count ++;
	}
     
     if(k==count){
     	
     }



}