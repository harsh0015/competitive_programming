#include<bits/stdc++.h>
using namespace std;

int main(){

   vector<int>st;
   for(int i=1;i<10;i++){
    for(int j=0;j<i;j++)
        st.push_back(i);
   }
   
   auto it=upper_bound(st.begin(),st.end(),3);
   cout <<int(it-st.begin())<<endl;
}