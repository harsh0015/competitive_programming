#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i;
        for(i=0;i<n;i++){
            if(s[i]=='0')
                break;
        }
        if(i==n){
            cout<<"1"<<" "<<n-1<<" "<<"2"<<" "<<n<<endl;
            continue;
        }
        if(i>=n/2){
            cout<<"1"<<" "<<i+1<<" "<<"1"<<" "<<i<<endl;
        }
        else
            cout<<i+2<<" "<<n<<" "<<i+1<<" "<<n<<endl;
    }
}