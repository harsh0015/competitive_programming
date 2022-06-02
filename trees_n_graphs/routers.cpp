#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin >>n;
	int arr[n+1];
	for(int i=2;i<n+1;i++)
		cin >>arr[i];

	int depth=1;
	stack<int> q;
	int x=n;
    q.push(x);
	while(x!=1){
       x=arr[x];
       q.push(x);
	}
	

	while(!q.empty()){
		cout<<q.top()<<" ";
		q.pop();
	}
}