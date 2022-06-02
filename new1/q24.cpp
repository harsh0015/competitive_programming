#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;
		int k;cin >>k;

		string s1;
		string s2;

		cin >>s1>>s2;

		int arr1[n];
		int arr2[n];

		for(int i=0;i<n;i++){
			arr1[i]=int(s1[i]);arr2[i]=int(s2[i]);
		}
         sort(arr1,arr1+n);sort(arr2,arr2+n);


         if(k==1){
         	bool flag=true;
           for(int i=0;i<n;i++){
           	if(arr1[i]>arr2[i])
           		flag=false;
           }

           if(flag)cout << "Yes"<<endl;
           else cout << "No"<<endl;
         }
         else{
		map<int ,int>m1,m2;

		for(int i=0;i<n;i++){
			if(m1.find(arr1[i])==m1.end())
				m1[arr1[i]]=1;
			else m1[arr1[i]]++;

			if(m2.find(arr2[i])==m2.end())
				m2[arr2[i]]=1;
			else m2[arr2[i]]++;


		}

    int count =0;
    int sm=0;
      for(int i=0;i<n;i++){
         if(arr2[i]>sm){
         	sm=arr2[i];

         	for(int j=0;j<n;j++)
         	{
         		if(m1[arr1[j]]==m2[sm] && m1[arr1[j]]!=0 && m2[sm]!=0 ){
                  if(m2[sm]%k==0 && arr1[j]<=sm){
                  	count++;
                  	m1[arr1[j]]=0;
                  	m2[sm]=0;
                  	break;}
         		}
         		if(j==n-1){
         			if(m1[arr1[j]]%m2[sm]==0 && m1[arr1[j]]!=0 && m2[sm]!=0 ){
                  if(m2[sm]%k==0 && arr1[j]<=sm){
                  	count++;
                  	m1[arr1[j]]=0;
                  	m2[sm]=0;
                  	break;}
         		}
         		}
         	}
         }
      }
      
      
      if(count == m2.size())
      	cout <<"Yes"<<endl;
      else cout <<"No"<<endl;
  }

	}
}