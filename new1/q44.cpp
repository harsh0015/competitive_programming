#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(v[i]);
        }
        int c=0;
        while(st.empty()==false){
            int e=*st.rbegin();
            st.erase(e);
            if(e%2==0){
                st.insert(e/2);
                c+=1;
            }
        }
        cout<<c<<endl;
    }
}