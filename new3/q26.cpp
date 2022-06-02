#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int 
int main()
{  
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
       vector<int>a(n);
       stack<int>z,o;
       for(int i=0 ; i<n ; i++){
           int j=z.size()+o.size();
           if(s[i]=='0'){
               if(o.empty())
               z.push(j);
               else{
                   j=o.top();
                   o.pop();
                   z.push(j);
               }
           }
           else{
               if(z.empty())
               o.push(j);
               else{
                   j=z.top();
                   z.pop();
                   o.push(j);
               }
           }
         a[i]=j;  
       }
       cout<<z.size()+o.size()<<endl;
       for(auto i : a)cout<<i+1<<" ";
       cout<<endl;
       
    }
   return 0;
}
