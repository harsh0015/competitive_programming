// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int t;cin >>t;

// 	while(t--){

// 		int n;cin >>n;

// 		int arr[n];

// 		for(int i=0;i<n;i++)cin >>arr[i];

// 			int c0=0,c1=0,c2=0;

// 		for(int i=0;i<n;i++){
// 			if(arr[i]%3==0)c0++;

// 			if(arr[i]%3==1)c1++;
// 			if(arr[i]%3==2)c2++;

// 		}

// 		int mi=min(c0,min(c1,c2));

// 		c0=c0-mi;
// 		c1=c1-mi;
// 		c2=c2-mi;

// 		int sum=(c0+c1+c2)/3;

// 		int arr1[3];

// 		arr1[0]=c0-sum;
// 		arr1[1]=c1-sum;
// 		arr1[2]=c2-sum;


// 		// for(int i=0;i<3;i++)cout <<arr1[i]<<" ";

// 		// 	cout <<endl;

// 		int count=0;
//       bool flag=false;

// 		for(int i=0;i<3;i++){
// 			if(arr1[i]>0){
// 				for(int j=i+1;j<3;j++){
// 					if(arr1[j]<0){
// 						if(arr1[i]+arr1[j]==0){
// 							arr1[i]=0;arr1[j]=0;
// 							count=count+j-i;
// 							break;
// 						}
// 						if(arr1[i]+arr1[j]<0){
							
// 							arr1[j]=arr1[j]+arr1[i];
// 							arr1[i]=0;
// 							count=count+j-i;
// 							break;
// 						}
// 						if(arr1[i]+arr1[j]>0){
							
// 							arr1[i]=arr1[i]+arr1[j];
// 							arr1[j]=0;
// 							count=count+j-i;
// 							continue;
// 						}
// 					}
// 				}
// 			}
// 		}




// 		///
// 		for(int i=2;i>=0;i--){
// 			if(arr1[i]>0){
// 				for(int j=i-1;j>=0;j--){
// 					if(arr1[j]<0){
// 						if(arr1[i]+arr1[j]==0){
// 							arr1[i]=0;arr1[j]=0;

// 							if(i-j==1)
// 							 count=count+2;

// 							else count=count+1;
// 							break;
// 						}
// 						if(arr1[i]+arr1[j]<0){
							
// 							arr1[j]=arr1[j]+arr1[i];
// 							arr1[i]=0;
// 							if(i-j==1)
// 							 count=count+2;

// 							else count=count+1;
// 							break;
// 						}
// 						if(arr1[i]+arr1[j]>0){
							
// 							arr1[i]=arr1[i]+arr1[j];
// 							arr1[j]=0;
// 							if(i-j==1)
// 							 count=count+2;

// 							else count=count+1;
// 							continue;
// 						}
// 					}
// 				}
// 			}
// 		}


// cout <<count<<endl;
      
// 	}
// }
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a) {
    cin >> x;
  }
 
  int res = 0;
  vector<int> cnt(3);
  for (int x = 0; x <= 2; x++) {
      for (int i = 0; i < n; i++) {
          if (a[i] % 3 == x) {
              cnt[x]++;
          }
      }
  }
  
  while (*min_element(cnt.begin(), cnt.end()) != n / 3) {
      for (int i = 0; i < 3; i++) {
          if (cnt[i] > n / 3) {
              res++;
              cnt[i]--;
              cnt[(i + 1) % 3]++;
          }
      }
  }
  cout << res << endl;
}
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
