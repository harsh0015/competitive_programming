#include<bits/stdc++.h>
using namespace std;
int t,i;
int n,k;
bool flag;

int arr[101];

int main(){
	int t;cin >>t;

	while(t--){

	

		cin >>n>>k;

	

		for( i=0;i<n;i++)
			cin >>arr[i];

		int count=0;

		for(i=0;i<n;i++)
			if(arr[i]!=-1)count ++;

		if(count <ceil(float(n)/float(2)))
		{
			cout <<"rejected"<<endl;
			continue;
		}
    flag=false;
		for( i=0;i<n;i++){
			if(arr[i]>k){
				cout <<"Too slow"<<endl;
				flag=true;
			}
		}

		if(flag)continue;


		for( i=0;i<n;i++){
			if(arr[i]>1 || arr[i]==-1)
				flag=true;
		}

		if(!flag){
			cout <<"BOt"<<endl;
			continue;
		}


		cout <<"accepted"<<endl;
	}
}
