#include <iostream>
#include<cmath>
#include<chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();
    bool flag;
    long long int i,x, sum;
    sum = 17;
    x = 11;
    while  (x <= 2000000)
    { 
        flag = true;
        int sqx=sqrt(x);
        for (i = 3; i <= sqx;i++)
        {
            if ((x % i) == 0)
            {
                flag = false;
                break;
            }   
        }
        if (flag == true)
        {
            sum += x;
        }
        x+=2;
    }
    cout << sum;
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<milliseconds>(stop - start);
    cout<<"Time: "<< duration.count()<<"ms\n";
    return 0;
}

 