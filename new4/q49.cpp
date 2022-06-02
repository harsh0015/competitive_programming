#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int q[n];
       int r[200007];
        for(int i=0;i<200007;i++){
           r[i]=-1;
       }
       for(int i=0;i<n;i++){
           cin>>q[i];
           r[q[i]]=0;
       }
       vector<int>v;
       for(int i=1;i<=n+1;i++){
           if(r[i]==-1){
               v.push_back(i);
           }
       }
       int a[n];
       for(int i=0;i<n;i++){
           a[i]=-1;
       }
       int b[n];
        for(int i=0;i<n;i++){
           b[i]=-1;
       }
       a[0]=q[0];
       b[0]=q[0];
       for(int i=1;i<n;i++){
           if(q[i]!=q[i-1]){
               a[i]=q[i];
               b[i]=q[i];
           }
       }
       int j=0;
       for(int i=0;i<n;i++){
           if(a[i]==-1){
               a[i]=v[j];
               j++;
           }
       }
       int p;
       for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
       }
       for(int i=0;i<n;i++){
         if(b[i]==-1){
             p=q[i];
             auto temp=lower_bound(v.begin(),v.end(),p);
             b[i]=v[temp-v.begin()-1];
             temp--;
             v.erase(temp);
         }  
       }
       cout<<"\n";
       for(int i=0;i<n;i++){
           cout<<b[i]<<" ";
       }
       cout<<"\n";
   }
 	return 0;
}
