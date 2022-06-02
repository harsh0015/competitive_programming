#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,m;cin >>n>>m;

		int arr[n][m];

		int iu=n,id=-1,jl=m,jr=-1;

		for(int i=0;i<n;i++){

			string s;cin >>s;

			for(int j=0;j<m;j++){
				if(s[j]=='0')arr[i][j]=0;
				else {
					arr[i][j]=1;
					if(i<iu)iu=i;
					if(i>id)id=i;

					if(j<jl)jl=j;
					if(j>jr)jr=j;



				}
			}
		}
bool flag=true;

     for(int i=iu;i<=id;i++){
     	for(int j=jl;j<=jr;j++){
		if(arr[i][j]==0){
			flag=false;
			break;
		}
     	}
     	if(!flag)break;
     }
    
   if(iu==n || id==-1 || jl==m || jr==-1){
   	cout <<"NO"<<endl;
   	continue;
   }

    if(flag)cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
	}
}