#include <iostream>
#include <cmath>
using namespace std;
// a<b<c. a+b+c=1000 a^2+b^2=c^2
int main()
{

    int prod, a, b, c, csq, squares[1000];
    double dc;
    for (a = 1; a < 1000; a++)
    {
        for (b = a + 1; b < 1000; b++)
        {
            csq=(a*a)+(b*b);
            dc = sqrt(csq);
            c = (int)dc;
            if (dc == c)
            {
                cout << "triple:" << a << ' ' << b << ' ' << c << '\n';
                if ((a + b + c) == 1000)
                { //end condition
                    prod = a * b * c;
                    cout <<"prpduct ="<< prod;
                    return 0;
                }
            }
           
        }
    }
 return 0;
}