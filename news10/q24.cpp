#include<bits/stdc++.h>
using namespace std;
int find(int p,vector<int>&par)
{
    if(par[p]==p)return p;
    return par[p]=find(par[p],par);
}
bool Union(int a,int b,vector<int>&parent,vector<int>&rank)
{
    int c=find(a,parent),d=find(b,parent);
    if(c==d)return 1;
    int x=rank[c],y=rank[d];
    if(x==y)parent[parent[d]]=c,rank[c]++;
    else if(x>y)parent[parent[d]]=c;
    else parent[parent[c]]=d;
    return 0;
    
}
int main()
{
    int k,l,m,n,i,j,c1=0,c2=0,a,b,x,y,c,d;
    cin>>n>>m>>k;
    vector<pair<int,int>>vp;
    vector<int>parent1(n+1),parent2(n+1),rank1(n+1),rank2(n+1);
    for(i=0;i<=n;i++)parent1[i]=i;
     for(i=0;i<=n;i++)parent2[i]=i;
    for(i=0;i<m;i++)
    {
       cin>>a>>b;
       Union(a,b,parent1,rank1);
    }
     for(i=0;i<k;i++)
    {
       cin>>a>>b;
       Union(a,b,parent2,rank2);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            a=i,b=j;
            x=find(a,parent1);y=find(b,parent1);
            if(x==y)continue;
             c=find(a,parent2);d=find(b,parent2);
             if(c==d)continue;
             Union(a,b,parent1,rank1);
             Union(a,b,parent2,rank2);
             c1++;vp.push_back({a,b});
        }
    }
    
    cout<<c1<<endl;
    for(auto i:vp)cout<<i.first<<" "<<i.second<<endl;
}