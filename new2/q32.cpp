#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,m;cin >>n>>m;

		int arr1[n],arr2[n];
		int arr3[m];

		for(int i=0;i<n;i++)cin arr1[i];

			for(int i=0;i<n;i++)cin >>arr2[i];

		for(int i=;i<m;i++)cin >>arr3[m];

			vector<int>v;
		unordered_map<int ,int>m1;

		for(int i=0;i<n;i++){
            if(arr1[i]!=arr2[i]){
            	v.push_back(arr2[i]);
            	if(m1.find(arr2[i])==m1.end())
            		m1[arr2[i]]=1
            	else m1[arr2[i]]++;
            }
		}
		unordered_map<int ,int>m2;

		for(int i=0;i<m;i++){
			if(m2.find(arr3[i])==m.end())
				m2[arr3[i]]=1;
			else m2[arr3[i]]++;
		}
         bool flag=false;
		for(auto i:m1){
          if(m2.find(i.first)==m2.end()){
          	flag=true;
          	break;
          }
          else{
          	if(m2[i.first]<i.second){
          		flag=true;
          		break;
          	}
          	else m2[i.first]=m2[i.first]-i.second;
          }
		}

		if(flag){
			cout <<"NO"<<endl;
			continue;
		}

		
	}
}