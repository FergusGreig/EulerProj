#include<iostream>
using namespace std;



int main()
{
    int n,i=0,x;
    n=1; //breaker
    x=20;//largest multiplyer start point
    while (n!=0){
        x+=20;
        for (i=19;i>0;i--){
            if (x%i!=0)break;
            if(i==1){
             cout<< x;
            return 0;
            }
        }
     if (x>1000000000) {n=0; cout<<"failed";}
    }   
return 0;
}

