#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin >>n;
    int arr[n+1];
    arr[1]=1;
    for(int i=2;i<n+1;i++)
      cin >> arr[i];

    bool flag=true;
     
   int count1=0;
   for(int i=2;i<n+1;i++)
   {
    if(arr[i]==1)
      count1++;
   }
   if(count1<2)
   {
    flag=false;
   }
  else{
    for(int i=1;i<n+1;i++)
{
      int count=0;
      for(int j=2;j<n+1;j++)
      {
        if(i==arr[j])
        {
          int counter=0;
          for(int k=2;k<n+1;k++)
            if(arr[k]==j)
              counter++;

             if(counter==0)
          count++;
        }
       
      
      }
      if(count>=3||count==0)
        continue;
      else{
        flag=false;
        break;
      }
    }//end of for
    
    if(flag)
    cout << "YES";
    else
    cout << "NO";
}
}