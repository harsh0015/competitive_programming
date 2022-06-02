#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k;cin >>n>>k;

		int arr[n];
		for(int i=0;i<n;i++)
			cin >>arr[i];

		unordered_map <int,int >m;

		for(int i=0;i<n;i++){
			if(arr[i]%k!=0){
				if(m.find(arr[i])==m.end())
					m[arr[i]%k]=1;
				else m[arr[i]%k]++;
			}
		}

		int r=0;

     int count =0;

     for(auto i:m){
     	if(i.second>count){
     		count =i.second;
     		r=i.first;
     	}
     	if(i.second==count && i.first<r)
     	{
     		count =i.second;
     		r=i.first;
     	}
     }

     cout <<k*(count-1)+k-r+1<<endl;
	}
}