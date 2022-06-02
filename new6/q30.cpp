#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;

	while(t--){

		int n,m;cin>>n>>m;

		int arr[n][m];

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
				cin>>arr[i][j];
		}

		bool flag=true;

		if(arr[0][0]>2||arr[0][m-1]>2 || arr[n-1][0]>2 || arr[n-1][m-1]>2)
			flag=false;

		for(int i=1;i<m-1;i++){
			if(arr[0][i]>3 || arr[n-1][i]>3)
				flag=false;
		}
		for(int i=1;i<n;i++){
			if(arr[i][0]>3 ||arr[i][m-1]>3)
				flag=false;
		}

		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				if(arr[i][j]>4)flag=false;

		if(flag){
			cout <<"YES"<<endl;

			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(i==0 && j==0 || i==0&&j==m-1 || i==n-1&&j==0 || i==n-1&&j==m-1)
					{
						cout <<2<<" ";
					}
					else if(i==0 || j==0 || i==n-1 || j==m-1){
						cout <<3<<" ";
					}
					else cout <<4<<" ";

				}
				cout <<endl;
			}
		}
		else cout <<"NO"<<endl;


	}
}