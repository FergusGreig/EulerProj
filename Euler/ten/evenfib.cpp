#include<iostream>
using namespace  std;


int main()
{
int fib1 = 1;
int fib2 = 2;
int fib3  = 0;
int sum = 0;
while (fib3<=4000000){
    fib3 = fib1+fib2;
    if (fib3%2 == 0){
        sum+=fib3;
    }
    fib1=fib2;
    fib2=fib3;
}
cout<<sum;
return 0;
}