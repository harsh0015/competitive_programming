#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >>t;

	while(t--){

		int n;
		cin >>n;

		int arrt[n+1];
		int arrx[n+1];

		for(int i=1;i<n+1;i++){
			cin >>arrt[i]>>arrx[i];
		}
          int pos=0;
		 int t1=0;
		 int t2=0;
         int posin[arrt[n]+1];
          
         for(int i=1;i<n+1;i++){
             if(arrt[i]>=t2){
             	t1=arrt[i];
             	t2=arrt[i]+abs(arrx[i]);

             	for(int j=t1;j<=t2;j++)
             	{
             		if(arrx[i]>pos)
             		{
             		if(j==t1)
             			posin[j]=pos;
             		else
             			posin[j]=posin[j-1]+1;
             	    }
             	else{
             		if(j==t1)
             			posin[j]=pos;
             		else
             			posin[j]=posin[j-1]-1;
             	    }
               }
             	pos=posin[t2];
             }
         }

         // for(int i=arrt[1];i<=arrt[n];i++){
         //   if(arrt[i])
         // }
          
          
       int count =0;
       arrt[n+1]=1000;
       for(int i=1;i<=n;i++){
       	for(int j=arrt[i];j<=arrt[i+1];j++)
       	{
       		if(posin[j]==arrx[i]){
       			cout <<"%"<<arrx[i]<<"%"<<j<<"&"<<endl;
       			count++;
       			break;
       		}

       	}
       }
       cout <<count<<endl;
	}
}