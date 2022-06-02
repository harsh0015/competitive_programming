 #include<bits/stdc++.h>
using namespace std;


 vector<pair<int,pair<int,int>>> minSumOfLengths(vector<int>& arr, int k) {
        
    map<int,int>m1,m2;
        vector<pair<int,pair<int,int>>>l;
        
    int sum=0;
        
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            
            if(sum==k){
                pair<int,int>p;
                p.first=0;
                p.second=i;
                
                pair<int,pair<int,int>>p1;
                p1.first=i+1;
                p1.second=p;
                l.push_back(p1);
            }
            
            if(m1.find(sum-k)!=m1.end()){
                pair<int,int>p;
                p.first=m2[sum-k]+1;
                p.second=i;
                
                pair<int,pair<int,int>>p1;
                p1.first=i-m2[sum-k];
                p1.second=p;
                l.push_back(p1);
            }
            
            m1[sum]++;
            m2[sum]=i;
        }
        
        return l;
    }

    int main(){

    vector<int> v={1,1,1,2,2,2,4,4};

    vector<pair<int,pair<int,int>>> v1=minSumOfLengths(v,6);
    sort(v1.begin(), v1.end());

    // cout <<v1.size();

    for(int i=0;i<v1.size();i++)cout <<v1[i].first<<" "<<v1[i].second.first<<" "<<v1[i].second.second<<" "<<endl;


    }