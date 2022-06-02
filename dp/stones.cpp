#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		vector<int>v;
		int i;
		for( i=0;i<n;i++){
			int a;
			cin >>a;
			v.push_back(a);
		}
		int c=3;

		for( i=0;i<n;i++){
			if(v[i]!=1){
				
				break;

			}
			if(i==n-1){
				i=-1;
				break;
			}
		}
		
		if(i==-1)
		{
			if(n%2==0)
				cout <<"Second"<<endl;
			else
				cout <<"First"<<endl;
		}
		else{
     if((i+1)%2==0)
				cout <<"Second"<<endl;
			else
				cout <<"First"<<endl;
		}
	}
}

