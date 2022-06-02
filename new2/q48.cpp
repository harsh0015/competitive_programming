#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k;cin >>n>>k;

		int arr[n];

	


		unordered_map<int ,int>m;

		for(int i=0;i<n;i++){
			cin >>arr[i];

			if(m.find(arr[i])==m.end())m[arr[i]]=1;
			else m[arr[i]]++;
		}

		// if(k%2==0 && !(m.find(k/2)==m.end())){
		//   bool flag=false;

		//   for(int i=0;i<n;i++){
		//   	if(arr[i]==k/2 && !flag){
		//   		arr1[i]=false;flag=true;
		//   	}

		//   	if(arr[i]==k/2 && flag)arr1[i]=true;;
		//   }
		// }

		unordered_map<int ,bool>m2;
      
      for(int i=0;i<n;i++){


         if(m.find(k-arr[i])==m.end())m2[arr[i]]=false;

         else {
         	m2[arr[i]]=false;
         	m2[k-arr[i]]=true;
         }
      }
int c=0;
if(k%2==0 && !(m.find(k/2)==m.end()))
     c=m[k/2];


 int r=0;
     


     for(int i=0;i<n;i++){

     	if(arr[i]==k/2 && c!=0){
     		if(r<c/2){
     			cout <<0<<" ";
     			r++;
     			continue;
     		}
     		else {
     			cout <<1<<" ";
     			
     			continue;
     		}
     	}


     	if(m2[arr[i]]==false)cout <<0<<" ";
     	else cout <<1<<" ";
     }
     cout <<endl;
	}
}