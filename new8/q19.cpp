#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int val = 1;
        string mini = s;
        for(int k=2;k<=n;k++){
            string str = "";
            for(int j=k-1;j<n;j++) str += s[j];
            if((n-k)%2 == 0) for(int j=k-2;j>=0;j--) str += s[j];
            else for(int j=0;j<k-1;j++) str += s[j];
            if(str < mini) mini = str, val = k;
        }
        cout<<mini<<endl;
        cout<<val<<endl;
    }
}