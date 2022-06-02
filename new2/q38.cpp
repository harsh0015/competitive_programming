#include<bits/stdc++.h>
using namespace std;



int main(){

	int h,w;cin >>h>>w;

	char arr[h+1][w+1];

	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++)
			cin >>arr[i][j];
	}
int count=0;

for(int i=1;i<h-1;i++){
	for(int j=1;j<w-1;j++){
        int counter=0;
		if(arr[i-1][j-1]==".")counter++;
		if(arr[i][j-1]==".")counter++;
		if(arr[i-1][j]==".")counter++;
	}
}

}