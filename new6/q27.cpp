#include<iostream> 
  
#include<math.h> 
 
 #include<cmath> 
 
 using namespace std; 
 int main() 
 {  
   long signed int num,i,b,d; 
 
   b=0; 
 double sqrt_num; 
  for(num=2;num<1000000;num++) 
  {   
 
  sqrt_num=sqrt(num);  
 sqrt_num= floor(sqrt_num); 
 int c; 
  for(i=2;i<=sqrt_num;i=i+1) 
  { 
  d=num%i; 
 
   if(d==0) 
  { c=2; 
  break;} 
 else 
 c=1;  
  } 
 if(c==1||num==2||num==3) 
 {  
   b=b+1; 
   printf("%ld-%ld\n",num,b); 
 } 
  } 
}