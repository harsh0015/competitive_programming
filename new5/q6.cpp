#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int r1=-1,c1=-1,r2=-1,c2=-1;
	    char A[n][n];
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            cin>>A[i][j];
	            if(A[i][j]=='*'){
	                if(r1==-1){
	                    r1=i;
	                    c1=j;
	                }
	                else{
	                    r2=i;
	                    c2=j;
	                }
	            }
	        }
	    }
	    if(r1==r2){
	        if(r1==n-1){
	            A[r1-1][c1]='*';
	            A[r1-1][c2]='*';
	        }
	        else{
	            A[r1+1][c1]='*';
	            A[r1+1][c2]='*';
	        }
	    }
	    else if(c1==c2){
	        if(c1==n-1){
	            A[r1][c1-1]='*';
	            A[r2][c1-1]='*';
	        }
	        else{
	            A[r1][c1+1]='*';
	            A[r2][c1+1]='*';
	        }
	    }
	    else{
	        A[r1][c2]='*';
	        A[r2][c1]='*';
	    }
	    for(int i=0; i<n; i++){
	        for(int j=0; j<n; j++){
	            cout<<A[i][j];
	        }
	        cout<<endl;
	    }
	}
	return 0;
}