#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >>t;

    while(t--){

       long long n;
        cin >>n;

        vector<int >v;
          
unordered_map<int ,int>m;

        if(n<4)
            cout << 1<<endl;
        else{

        for(int i=2;i<=sqrt(n);i++){
               
            
            if(n%i==0){

                int count=0;
                for(int j=1;j<100;j++){

                    if(n%int(pow(i,j))==0)count++;
                    else{
                        m[i]=count;
                    }
 
                }
            }
        }
        // sort(v.begin(), v.end());

        // cout <<"*"<<v.size()<<endl;


     if(m.size()==0){
        cout <<1 <<endl;
    cout <<n<<endl;}
    else{
   
   int maxi=0;
   for(auto x:m){
    maxi=max(maxi,x.second);
        
    }
   }
}
