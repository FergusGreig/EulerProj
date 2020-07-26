#include<iostream>
using namespace std;
 int main(){

     int i=0,sumsq=0,sum=0,sqsum=0;

     for (i=1;i<101;i++){
         sum+=i;
         sumsq+=i*i;

     }
     sqsum = sum*sum;
     int diff = sqsum-sumsq;
     cout<<diff;
     return 0;
 }