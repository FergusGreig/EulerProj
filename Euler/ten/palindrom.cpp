#include <iostream>
#include <sstream>
using namespace std;
int re_num(int a);
int palis[100];
int n, m, prod, reprod, i = 0, b;
int main()
{

    for (n = 999; n > 100; n--)
    {
        for (m = 999; m > 100; m--)
        {
            prod = n * m;
            reprod = re_num(prod);
            if (prod == reprod)
            {
                cout << "\n Large palindrome =" << prod;
                cout << " \n made by " << m << " * " << n;
                palis[i] = prod;
                i++;
                break;
            }
        }
        if (i > 100)
            break;
    }
    int trial = palis[0];
    for (i = 1; i < 100; i++)
    {
        if (palis[i] >= trial)
            trial = palis[i];
    }
    cout << " the largest of these is ... " << trial;

    return 0;
}

int re_num(int a)
{
    string test = to_string(a);
    string nstr;
    copy(test.rbegin(), test.rend(), back_inserter(nstr));
    stringstream(nstr) >> b;
    return b;
}
