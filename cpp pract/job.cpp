#include<bits/stdc++.h>
using namespace std;

int main()
{

	int t;
	cin >>t;

	for(int i=0;i<t;i++)  
   {
		int n,k;
		cin >>n>>k;
		string s;
		cin >>s;
		vector<char> v;
       int countl=0;

		for(int j=0;j<s.length();j++)
		{
            v.push_back(s[j]);
           if(s[j]=='L')
        	countl++;
	    }

		int countc=0;
           
		if(k>=countl)
		{
			for(int j=0;j<n;j++)
			{
             if(v[j]=='L')
             	v[j]='W';
             
			}

		}

		else
		{
             for(int j=1;j<n;j++){
             	if(v[j]=='L'&&v[j-1]=='W'&&v[j+1]=='W'&&k!=0)
             	{   
             		v[j]='W';
             		k=k-1;
             		countl=countl-1;
             	}
             }

			for(int j=0;j<n;j++)
			{
				if(v[j]=='L')
				{   
					if(v[j-1]=='W')
					{
						if(k!=0)
						{
					    v[j]='W';
					   countl--;
					    k=k-1;
				        }
				     }
					else
					{

						if(k==countl)
						{
							if(k!=0){
							v[j]='W';
							k--;
							countl--;}
						 }
						else
						{
							countl--;
						}
				    }
			    }
				   
			}
		}
				

				int sum=0;

				for(int j=0;j<n;j++){
					// cout << v[j]<<" ";
					if(v[j]=='W'&&j==0)
						sum=sum+1;
					else if(v[j]=='W'&&v[j-1]=='W')
						sum=sum+2;
					else if(v[j]=='W'&& v[j-1]!='W')
						sum=sum+1;}
				cout << sum<<endl;
		
		

		
	}
}