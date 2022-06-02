#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >>t;
	while(t--){

		int n,m;
		cin >>n>>m;

		char arr[n+2][m+2];

		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
				cin >> arr[i][j];


	int count =0;



	for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++)
			{
				if(arr[i][j]=='*')
				{   
					if(i<n){
					count ++;
					cout <<i<<"*"<<j<<endl;
					bool flag=true;
					while(flag)
					{

						int k;
						for( k=i+1;k<=n;k++){
							for(int z=j-(k-i);z<=j+k-i;z++)
							 {
							 	if(arr[k][z]!='*')
							 	                    {

							 		flag=false;
							 		break;
							 	                    }
							 }//endl of for
							 	if(flag){
                                 cout <<"here";
							 	count++;}

							 	 if(!flag)
							 	break;
							 if(k>=n){
								flag=false;
								break;}
						 }//end of for 2
						
						cout <<i<<endl;
					}//end of while
					}

			}//end of if
						 

		}

	}
			
	
	cout <<"count"<< count <<endl;
}
}