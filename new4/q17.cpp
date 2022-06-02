#include <bits/stdc++.h>
using namespace std;
 
// Returns XOR of x and y
int myXOR(int x, int y)
{
   return (x | y) & (~x | ~y);
}
 
// Driver program to test above function
int main()
{
   int t;cin >>t;

   while(t--){


   	int n,m,k;cin >>n>>m>>k;

   	int sum=2+k;
   	int count=1;


   for(int i=1;i<=n;i++){
   	for(int j=1;j<=m;j++){
   		if(i==1 && j==1)continue;

   		else sum=myXOR(sum,i+j+k);
   	}
   }

   cout <<sum<<endl;
   }

   
   // int arr[]={0,11,27};
   // int sum=arr[0];

   // for(int i=1;i<3;i++)sum=myXOR(sum,arr[i]);
   // cout << "XOR is " << sum;
   // return 0; 
}