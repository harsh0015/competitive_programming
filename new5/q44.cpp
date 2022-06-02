#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main() 
{
    int n, k; cin>>n>>k;
    int a[27] = {0}; 
    for(int i = 0 ; i < n ; i++) 
    {
        char num; cin>>num;
        a[(int)num-64]++;
    }
    sort(a,a+27);
    
    int sum = 0;
    int i = 26;
    while(k && i >0)
    {
        if(a[i] >= k) {sum += (k*k); break;}
        else 
        {
            sum += (a[i]*a[i]); k -= a[i];          
        }
        i--;
    }
    
    cout<<sum<<endl;
    return 0;
}