#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findTheWinner(int n, int k) {
        
        bool arr[n+1];
        
        for(int i=1;i<n+1;i++){
            arr[i]=true;
        }
        int count=0;
         int counter=0;
        int i;
        int last=0;
        while(count!=n-1){
          // cout <<"count:"<<count<<endl;
           if(last==n)i=1;
            else i=last+1;
            int r=i;
            bool f=false;
            // cout <<"<"<<i<<">"<<endl;
            // cout <<"counter:"<<counter<<endl;
            for( int p=i;p<n+1;p++){
                if(arr[p]){
                    counter++;
                    if(counter==k){
                        arr[p]=false;
                        count++;
                        last=p;
                        counter=0;
                        f=true;
                        // cout <<p<<"%1"<<endl;
                        break;
                    }
                }
            }   
            if(f)continue;
            
                  for( int j=1;j<i;j++){
                    // cout <<"*";
                if(arr[j]){
                    counter++;
                    if(counter==k){
                        arr[j]=false;
                        count++;
                        last=j;
                        counter=0;
                        // cout <<j<<"%2"<<endl;
                        break;
                    }
                }
            
            }
            
        }
        
        for(int i=1;i<=n;i++){
            if(arr[i])return i;
        }
        return 0;
    }
};

int main(){

Solution sol ;

cout <<sol.findTheWinner(5,2);
}