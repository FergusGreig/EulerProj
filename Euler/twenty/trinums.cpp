#include<iostream>
using namespace std;

//not a good method.
int main()
{
    int i,j,n,trynum,halfnum;
    trynum = 0;

    for (i=1;i<1000000;i++){
        trynum +=i;
        n=1;
        if (trynum<50000)continue;  
        if (trynum%2!=0)continue;
        halfnum = trynum/2;
        for (j=1;j<=halfnum;j++){
            if(trynum%j ==0){
                n++;
            }
        }
        if (n>=500){
            std::cout<<trynum;
            return 0;
        }
    }

    std::cout<<"failed";
    return 0;
}