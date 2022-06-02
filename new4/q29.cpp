#include <bits/stdc++.h>
using namespace std;

int main() {
      int n,k;cin >>n>>k;
      
      bool arr[n+1];
      
      for(int i=1;i<n+1;i++){
          arr[i]=false;
      }
      
      for(int i=0;i<n;i++){
          int a,b;cin >>a>>b;
          
          arr[a]=true;
          arr[b]=true;
      }
      
      int count=0;
      
      for(int i=1;i<n+1;i++)if(!arr[i])count++;
      
      cout <<ceil(float(count)/2);
	return 0;
}
