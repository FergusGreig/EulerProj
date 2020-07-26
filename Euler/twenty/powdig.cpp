#include<iostream>
using namespace std;

int main()
{
    int num[350]{};
    int i, n, d, carry;
    int sum = 0;

    num[0] = 2;

    for (i=1;i<1000;i++)
    {
        
        carry = 0;
        for (n=0;n<350;n++)
        {
            d=(num[n]*2 + carry);
            num[n]=d%10;
            carry = d/10;
            
        }

    }
    for (i=0;i<350;i++){
     sum+=num[i];
    }
    cout<<sum;
    return 0;


}