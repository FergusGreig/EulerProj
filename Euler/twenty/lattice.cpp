#include <iostream>

using namespace std;
int main()
{

    int n = 4;
    int i = 0; 
    long long int sumsq = 0;
    const int no2 =  43;
    long long int oldv[no2] = {};
    oldv[1] =1;
    oldv[2] =1;
    long long int newv[no2] = {};

    while (n != no2)
    {
        n++;

        for (i = 1; i <= n; i++)
        {
            newv[i] = oldv[i - 1] + oldv[i];
        }

        for (i = 0; i <= n; i++)
        {
            oldv[i] = newv[i];
        }
    }

  
    cout << oldv[21]; 
    return 0;
}