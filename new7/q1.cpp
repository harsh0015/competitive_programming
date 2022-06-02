#include<bits/stdc++.h>
using namespace std;
int a[105],b[105],asd[105];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i],asd[i]=0;
        for(int i=n-1;i>=1;i--)
            for(int j=i;j<n;j++)
                if(a[j]>a[j+1]&&asd[j]==0)
                    swap(a[j],a[j+1]),asd[j]=1;
        for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    cout<<endl;
    }
}