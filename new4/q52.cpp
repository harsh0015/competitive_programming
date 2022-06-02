class Solution {
public:
    int beautySum(string s) {
        int count=0;
        
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                unordered_map<char,int>m;
                
                
                
               for(int k=i;k<=j;k++){
                   m[s[k]]++;
               }
              int min=m[s[i]];
                int max=m[s[i]];
                for(auto i:m){
                    if(i.second>max)max=i.second;
                    if(i.second<min)min=i.second;
                }
               count=count+max-min;
               
            }
        }
        return count ;
    }
};