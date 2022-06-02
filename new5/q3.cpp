#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minSideJumps(vector<int>& v) {
        int n=v.size();
        int arr1[n+1],arr2[n+1],arr3[n+1];
        
         arr2[0]=0;
         arr3[0]=1;
         arr1[0]=1;
        
        for(int i=1;i<=n;i++){
            if(v[i]==1){
                arr1[i]=INT_MAX;
                if(v[i-1]!=2){
                    arr2[i]=min(arr2[i-1],min(arr1[i]+1,arr3[i]+1));
                }
                else {
                    arr2[i]=min(arr1[i]+1,arr3[i]+1);
                }
                
                 if(v[i-1]!=3){
                    arr3[i]=min(arr3[i],min(arr1[i]+1,arr2[i]+1));
                }
                else {
                    arr3[i]=min(arr1[i]+1,arr2[i]+1);
                }
            }
            ///
             if(v[i]==2){
                arr2[i]=INT_MAX;
                if(v[i-1]!=1){
                    arr1[i]=min(arr1[i],min(arr2[i]+1,arr3[i]+1));
                }
                else {
                    arr1[i]=min(arr2[i]+1,arr3[i]+1);
                }
                
                 if(v[i-1]!=3){
                    arr3[i]=min(arr3[i],min(arr1[i]+1,arr2[i]+1));
                }
                else {
                    arr3[i]=min(arr1[i]+1,arr2[i]+1);
                }
            }
            ///
             if(v[i]==3){
                arr3[i]=INT_MAX;
                if(v[i-1]!=2){
                    arr2[i]=min(arr2[i],min(arr1[i]+1,arr3[i]+1));
                }
                else {
                    arr2[i]=min(arr1[i]+1,arr3[i]+1);
                }
                
                 if(v[i-1]!=1){
                    arr1[i]=min(arr1[i],min(arr3[i]+1,arr2[i]+1));
                }
                else {
                    arr1[i]=min(arr3[i]+1,arr2[i]+1);
                }
            }
            
            
        }

cout <<"?????????"<<endl;
for(int i=0;i<=n;i++)cout <<arr1[i]<<" ";
cout <<endl;
for(int i=0;i<=n;i++)cout <<arr2[i]<<" ";
cout <<endl;
for(int i=0;i<=n;i++)cout <<arr3[i]<<" ";
cout <<endl;

        return min(arr1[n],min(arr2[n],arr3[n]));
        
    }
};

int main(){
    Solution sol;
    vector<int>v={0,1,2,3,0};
    cout << sol.minSideJumps(v);
}

