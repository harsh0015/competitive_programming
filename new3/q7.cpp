#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int n;
          cin>>n;
         long long  int k;
          long long int flag=0;
          long long int arr[n];
          for(long long int i=0;i<n;i++){
               cin>>arr[i];
          }
          for(long long int i=0;i<n-1;i++){
               if(arr[i]>i){
                    k=arr[i]-i;
                    arr[i+1]=arr[i+1]+k;
                    arr[i]=arr[i]-k;
               }
          }
          for(long long int i=0;i<n-1;i++){
               if(arr[i]>=arr[i+1]){
                    flag=1;
                    break;
               }
          }
          if(flag)
               cout<<"NO"<<endl;
          else
               cout<<"YES"<<endl;
     }
}