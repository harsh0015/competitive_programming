#include<bits/stdc++.h>
using namespace std;

int arr[100][100];
void merge(int top,int bottom,int left ,int right,int c1,int c2){

	//row sorting;


	for(int i=top;i<bottom;i++){
	    int l[c2-left];
	    int r[right-c2];
	    int li=-1;
	    int ri=-1;

	    for(int j=left;j<c2;j++)
	    {
	
			li++;
			l[li]=arr[i][j];
		
	    }
	     for(int j=c2;j<right;j++)
	    {
	
			ri++;
			r[ri]=arr[i][j];
			
	    }
         int m=left;
         int k=0,h=0;
        
	    while(k<=li && h<=ri){
	    	if(l[k]<=r[h]){
	    		arr[i][m]=l[k];
	    		
	    		k++;
	    	}
	    	else{
	    		arr[i][m]=r[h];
	    		h++;
	    	}
	    	m++;
	    }

	    while(k<=li){
	    	arr[i][m]=l[k];
	    	k++;
	    	m++;
	    }
	    while(h<=ri){
	    	arr[i][m]=r[h];
	    	h++;
	    	m++;
	    }


	}
    //column sorting

	for(int i=left;i<right;i++){
	    int t[c1-top];
	    int b[bottom-c1];
	    int ti=-1;
	    int bi=-1;

	    for(int j=top;j<c1;j++)
	    {
	
			ti++;
			t[ti]=arr[j][i];
	    }
	     for(int j=c1;j<bottom;j++)
	    {
	
			bi++;
			b[bi]=arr[j][i];
	    }
         int m=top;
         int k=0,h=0;

	    while(k<=ti && h<=bi){
	    	if(t[k]<=b[h]){
	    		arr[m][i]=t[k];
	    		k++;
	    	}
	    	else{
	    		arr[m][i]=b[h];
	    		h++;
	    	}
	    	m++;
	    }
	    

	    while(k<=ti){
	    	arr[m][i]=t[k];
	    	k++;
	    	m++;
	    }
	    while(h<=bi){
	    	arr[m][i]=b[h];
	    	h++;
	    	m++;
	    }


	}

}


void mergesort(int top,int bottom,int left ,int right){
  
	if(right-left<=1 || bottom-top<=1)return;

	int c1=bottom-(bottom-top)/2;
	int c2=right-(right-left)/2;

	

	mergesort(top,c1,left,c2);
	mergesort(top,c1,c2,right);
	mergesort(c1,bottom,left,c2);
	mergesort(c1,bottom,c2,right);

	merge(top,bottom,left,right,c1,c2);


}


int main(){

	int t;cin>>t;
	while(t--){

		int n,m;cin>>n>>m;


		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
				cin>>arr[i][j];
		}

		mergesort(0,n,0,m);

		cout <<endl;
		

		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
				cout <<arr[i][j]<<" ";

			cout <<endl;
		}


	}
}

// 1
// 4
// 18 4 16 8
// 23 13 20 11
// 28 24 26 25
// 1 30 15 19

// 1
// 3
// 18 9 11
// 1 4 15
// 13 23 20

//  1
// 5
// 18 4 16 8 4
// 23 13 20 11 3
// 28 24 26 25 3
// 1 30 15 19 54
// 23 13 20 11 3