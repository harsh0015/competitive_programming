#include<bits/stdc++.h>
using namespace std;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;cin>>n;
    
    map<int ,int>m1,m2;
   int arr1[n],arr2[n];
    for(int i=0;i<n;i++){
    	int x;cin>>x;
    	arr1[i]=x;
    	m1[x]=i;
    }

    for(int i=0;i<n;i++){
    	int x;cin>>x;
    	arr2[i]=x;
    	m2[x]=i;
    }

     map<int ,int>m3,m4;

     for(int i=0;i<n;i++){

     	if(m2[arr2[i]]<=m1[arr2[i]]){
     		m3[m1[arr2[i]]-m2[arr2[i]]]++;

     		m4[m2[arr2[i]]+1+n-1-m1[arr2[i]]]++;
     	}
     	else{
     		m3[n-1-m2[arr2[i]]+1+m1[arr2[i]]]++;

     		m4[m2[arr2[i]]-m1[arr2[i]]]++;
     	}
     }

     int count=0;

     for(auto i:m3){
     	count=max(count,i.second);
     }
       for(auto i:m4){
     	count=max(count,i.second);
     }

     cout <<count<<endl;
}