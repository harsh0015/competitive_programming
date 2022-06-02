#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >>t;

	while(t--){

		int n,k;

		cin >>n>>k;

		int arr[n];

		for(int i=0;i<n;i++)
			cin >>arr[i];

		int count=0;

		for(int i=0;i<n;i++)
			if(arr[i]!=-1)count ++;

		if(count <ceil(float(n)/float(2)))
		{
			cout <<"rejected"<<endl;
			continue;
		}
         bool flag=false;
		for(int i=0;i<n;i++){
			if(arr[i]>k){
				cout <<"Too slow"<<endl;
				flag=true;
				break;
			}
		}

		if(flag)continue;


		for(int i=0;i<n;i++){
			if(arr[i]>1 || arr[i]==-1){
				flag=true;
				break;
			}
		}

		if(!flag){
			cout <<"Bot"<<endl;
			continue;
		}


		cout <<"accepted"<<endl;
	}
}