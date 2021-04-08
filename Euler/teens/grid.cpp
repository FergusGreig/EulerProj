#include<iostream>
using namespace std;

int main(){
    long long int i, n =1, m=1,x;
    for (i=40;i>20;i--){
        m = (i/(i-20));
        n*=m;
         
    }
    
    cout<<n;
    return 0;

}