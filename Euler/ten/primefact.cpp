#include<iostream>
using namespace std;

int main(){

    long long num = 600851475143;
    int i;
    i = 1;
    do {
        if (num%i==0){
            cout<<i<<"\n";
            num/=i;
        }
        i+=2;

    } while (i<num);
cout <<"end, i = "<< i;
return 0;
}