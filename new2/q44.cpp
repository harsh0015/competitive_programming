#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,m;cin >>n>>m;

		int arr1[n];
		int arr2[n];
		int arr3[m];

		for(int i=0;i<n;i++)cin >>arr1[i];


		for(int i=0;i<n;i++)cin >>arr2[i];

		for(int i=0;i<m;i++)cin >>arr3[i];


		unordered_map<int ,int >m1,m2;

	for(int i=0;i<n;i++){
		if(arr1[i]!=arr2[i]){
			if(m1.find(arr2[i])==m1.end())
				m1[arr2[i]]=1;
			else m1[arr2[i]]++;
		}
	}

	for(int i=0;i<m;i++){
		
			if(m2.find(arr2[i])==m1.end())
				m2[arr3[i]]=1;
			else m2[arr3[i]]++;
		
	}
     bool flag=false;
    for(auto i:m1){
        if(m2.find(i.first)==m2.end()){
        	cout <<"NO"<<endl;
        	flag=true;
        	break;
        }

        else {
        	if(m2[i.first]<i.second){
        		cout<<"NO"<<endl;
        		cout <<"*"<<endl;
        		flag=true;
        		break;
        	}
        	else m2[i.first]=m2[i.first]-i.second;
        }

    }


    if(flag)continue;

    for(auto i: m2){
    	for(int i=0;i<n;i++)
    }

    int count1=0;
    int count2=0;

    unordered_map<int ,int >m3;

    for(auto i:m2){
    	m3[i.first]=i.second;
    }



    for(int i=0;i<m;i++){
    	if(m3[arr3[i]]!=0 && count2==0){
    		cout <<"NO"<<endl;
    		cout <<"**"<<endl;
    		flag=true;
    		break;
    	}

    	if(m3[arr3[i]]==0){count2++;continue;}

    	if(m3[arr3[i]]!=0 && count2!=0){
    		m3[arr3[i]]--;
    		count2--;
    		continue;
    	}
    }


    if(flag)continue;



	}
}