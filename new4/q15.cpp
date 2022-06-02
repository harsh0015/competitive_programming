#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

	ll t;cin >>t;

	while(t--){

		ll n;cin >>n;

		ll arr[n];

		for(ll i=0;i<n;i++)cin >>arr[i];


			if(n==1 || n==2){
				cout <<0<<endl;
				continue;
			}
// cout <<"#1"<<endl;
		bool flag=true;
       ll d;
       bool flag1=false;

       for(ll i=1;i<n;i++){
       	if(arr[i]-arr[i-1]>=0){
       		d=arr[i]-arr[i-1];
       		flag1=true;;
       		break;
       	}
       }

       if(!flag1){
       	cout <<-1<<endl;
       	continue;
       }
// cout <<"#2"<<endl;
       for(ll i=1;i<n;i++){
       	if(arr[i]-arr[i-1]!=d){
       		flag=false;
       		break;
       	}
       }

       if(flag){
       	cout <<0<<endl;
       	continue;
       }
// cout <<"#3"<<endl;

     ll a,b,c;

     for(ll i=1;i<n;i++){
     	if((arr[i]-arr[i-1])*(arr[i]-arr[i+1])>=0){
     		a=arr[i-1];b=arr[i];c=arr[i+1];
     		break;
     	}
     }

     ll arr1[3];

     arr1[0]=a;
     arr1[1]=b;
     arr1[2]=c;

     ll diff;

     for(ll i=1;i<3;i++){
     	if(arr[i]-arr[i-1]>=0){
     		diff=arr[i]-arr[i-1];
     		break;
     	}
     }

     flag=false;

     ll m;
     ll c1,c2;

     if(b-a==diff){
       c1=b+1;
       c2=b+diff;

       for(ll i=c2;i>=c1;i--){
       	flag=true;
       	if((b+diff)%i==c){
       		m=i;
       		break;
       	}
       }
     }
// cout <<a<<" "<<b<<" "<<c<<endl;
// cout <<"#4"<<endl;
     // 

     if(c-b==diff){
       c1=c;
       c2=a+diff;

       for(ll i=c2;i>=c1;i--){
       	flag=true;
       	if((a+diff)%i==b){
       		m=i;
       		break;
       	}
       }
     }
// cout <<"#5"<<endl;

if(!flag){
	cout <<-1<<endl;
	continue;

}

// cout <<m<<endl;
// cout <<"#6"<<endl;

 flag=true;

for(ll i=0;i<3;i++){
	if(m<=arr1[i])
		flag=false;
}

if(!flag){
	cout <<-1<<endl;
	continue;
}

 flag=true;

for(ll i=1;i<n;i++){
	if(arr[i]!=(arr[i-1]+diff)%m){
		flag=false;
		break;
	}
}

if(!flag){
	cout <<-1<<endl;
	continue;

}
else {
	cout <<m<<" "<<diff<<endl;
}


	}
}