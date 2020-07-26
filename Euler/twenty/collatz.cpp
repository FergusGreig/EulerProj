#include<iostream>
using namespace std;

int main(){
    long long n;
    int i,most=0,chain,val;

for (i=2;i<=1000000;i++){
    chain = 1;
    n=i;
        while(n!=1){   
            chain++;
            if (n%2==0){
                n/=2;
            }
            else{
                n=(3*n)+1;
            }
        }
        if (chain>most){
            most = chain;
            val = i;
        }

}
cout<<val;
return 0;
}

