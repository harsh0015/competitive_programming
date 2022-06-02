#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){
		char arr[3][3];
		int countx=0,counto=0,winx=0,wino=0,count_=0;

		for(int i=0;i<3;i++)
			for(int j=0;j<3;j++){
				cin >>arr[i][j];
				if(arr[i][j]=='X')countx++;
				else if(arr[i][j]=='O')counto++;
				else count_++;
			}


		for(int i=0;i<3;i++){
			if(arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2]){
				if(arr[i][0]=='O')wino++;
				else if(arr[i][0]=='X')winx++;
			}
		}


		for(int i=0;i<3;i++){
			if(arr[0][i]==arr[1][i] && arr[1][i]==arr[2][i]){
				if(arr[0][i]=='O')wino++;
				else if(arr[0][i]=='X')winx++;
			}
		}

		if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]){
			if(arr[0][0]=='O')wino++;
			else if(arr[0][0]=='X')winx++;
		}

		if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0]){
			if(arr[0][2]=='X')winx++;
			else if(arr[0][2]=='O')wino++;
		}

		if(counto >countx){
			cout <<3<<endl;
		}
		else if(countx-counto>1)cout <<3<<endl;
		else if(countx > counto && winx==1 && wino==0)cout <<1<<endl;
		else if(countx==counto && wino==1 && winx==0)cout <<1<<endl;
		else if(count_==0 && winx==0 && wino==0)cout <<1<<endl;
		else if(count_==0 && winx==2)cout <<1<<endl;
		else if(count_>0 && (winx+wino)==0)cout <<2<<endl;
		else cout<<3<<endl;




	}
}