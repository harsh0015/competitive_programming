#include<bits/stdc++.h>
#include <string>
#include <unordered_map>
using namespace std;
#define ll long long
 
 
 
 
void solve(){
    unordered_map<string,int> look_up;
 
    string s;
    cin >> s;
 
    int n = s.size();
    if(n%2 != 0){cout << "NO"<<endl;return;}
    int count = 0 ;
    for(int i=0; i<n ; i ++) {
        if(s[i]==')')count--;
        else count++ ;
        if(count<0){
            cout<<"NO"<<endl;
            return;
        }
    }
    count = 0;
    for(int i=n-1; i>=0 ; i--) {
 
        if(s[i]=='(')count--;
        else count++ ;
        if(count<0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout << "YES"<<endl;
 
    /*
    */    
}
 
int main()
{
    ll t;
    cin >> t;
 
    while(t--)
    solve();
    return 0;
}