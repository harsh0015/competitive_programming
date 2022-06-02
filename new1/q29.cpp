#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int n=0,k=0;
        cin>>n>>k;
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++)
        {
            int v1,v2=0;
            cin>>v1>>v2;
            vec.push_back({v1,v2});
        }
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            // int count=0;
            flag=true;
            for(int j=0;j<n;j++)
            {
                if(i==j)    continue;
                if(abs(vec[i].first-vec[j].first)+abs(vec[i].second-vec[j].second)>k)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            cout<<"1\n";
        else
            cout<<"-1\n";
        
        
    }
    return 0;
}