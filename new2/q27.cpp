// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	int t;cin >>t;


// 	while(t--){
// 		int n;cin >>n;

// 		int arr[n];

// 		for(int i=0;i<n;i++)cin >>arr[i];

// 	  int a[n],b[n];

// 	for(int i=0;i<n;i++) cin >>a[i];

// 		for(int i=0;i<n;i++) cin >>b[i];

// 	int maxi=0;

// int c[n];

// for(int i=1;i<n;i++){

// 	int r=abs(a[i]-b[i])+2+arr[i]-1;
//     c[i]=r;
// 	if(r>maxi)maxi=r;
// }
  
//   cout <<"********"<<endl;
// for(int i=1;i<n;i++)cout <<c[i]<<" ";
//   cout <<"***********"<<endl;
//   cout<<maxi<<"*"<<endl;
// vector<int >v ;

// v.push_back(1);
// for(int i=1;i<n;i++){
// 	if(a[i]==b[i] && i!=1)v.push_back(i-1);
// }
// v.push_back(n-1);


// 	}
// }
#include <bits/stdc++.h> 
using namespace std; 
#define val 1000000007
 
 
int main()
{
 
				 		
	  		ios_base::sync_with_stdio(false); 
			cin.tie(NULL);
    	
    	 
			long long int i,j;
			long long x,y,z,n,e,w,a,c,k,m,sum,l,diff,mx,mn,cont,r,r1,l1,ans=0,q,d;		
			
	
				 
			cin>>n;
				 
			 for(i=0;i<n;i++){
				
				cin>>m;
				
				long long arr[m],brr[m],crr[m];
				
					for(j=0;j<m;j++){
					cin>>crr[j];
				}
				
				for(j=0;j<m;j++){
					cin>>arr[j];
				} 
				
				for(j=0;j<m;j++){
					cin>>brr[j];
				}
				
			
			
				long long prev[m+1];
				
				mx=crr[1]-1+2+abs(brr[1]-arr[1]);
				
				prev[1]=abs(brr[1]-arr[1]);	
				for(j=2;j<m;j++){
					if(brr[j]==arr[j]){
						mx=max(mx,crr[j]-1+2);
						prev[j]=0;
					}else{
						
						prev[j]=max(prev[j-1]+2+crr[j-1]-1-abs(brr[j]-arr[j]),abs(brr[j]-arr[j]));
						mx=max({mx,crr[j]-1+2+prev[j]});
						
					}
				}
				
				cout<<mx<<endl;
				
				
		 }
			
			
			
			
			
				
	
				
				
				
}			
				
				
			