#include <iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
 
int main()
{
 
   int t;
   cin>>t;
   while(t--)
   {
   long long int n,s=0;
   cin>>n;
   long long int a[n];
   for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    long long int r=ceil(s*1.0/(n-1));
    long long int x=r*(n-1);
    sort(a,a+n);
    long long int y=(a[n-1]*(n-1));
    if(y>s)
        cout<<y-s<<endl;
        else
    cout<<x-s<<endl;
 
   }
}