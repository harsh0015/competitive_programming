#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >>n;

    int arr[n+1];
    for(int i=1;i<n+1;i++)
    	cin >>arr[i];


int depth=-1;
int x;
for(int i=1;i<n+1;i++){
	int nodec=1;
 if(arr[i]!=-1){
 	x=arr[i];
 	while(x!=-1){
  
  nodec++;
  x=arr[x];
}
 }
 depth=max(depth,nodec);
}
 cout << depth;

}