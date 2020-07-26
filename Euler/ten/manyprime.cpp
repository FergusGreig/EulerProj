#include<iostream>
using namespace std;


int main(){
    int primes[10001];
    int i,x,n;
    for(i=0;i<10001;i++){
        primes[i]=0;
    }
    i=2;
    primes[0]=2;
    primes[1] =3;
    x=4;

    while (i<10001){
    n=0;
    while (primes[n]!=0){
        if (x%primes[n]==0)break;
        n++;
        if (primes[n]==0){
             primes[n] =x;
             i++;
        }
    
    }    
    x++;
    }
    cout<<primes[10000];
return 0;
}