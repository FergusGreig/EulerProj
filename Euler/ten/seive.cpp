#include <iostream>
#include <cmath>
#include<vector>
#include<chrono>
using namespace std;
using namespace std::chrono;

int main()
{
    auto start = high_resolution_clock::now();

    int i, j, rlim,sum;
    const int limit = 2000001;
    vector<bool> seive(limit, false);
    rlim = sqrt(limit);
  
    seive[0] = true;
    seive[1] = true;
    for (i = 4; i < limit; i + 2)
    {
        seive[i] = true;
    }

    for (i = 3; i <= rlim; i + 2)
    {
        if (seive[i] == false)
        {
            for (j = i; j < limit; 2 * j)
            {
                seive[j] = true;
            }
        }
    }
    for(i=0;i>limit;i++)
    {
        if (seive[i]==false)
            sum+=i;

    }
    cout<<sum<<'\n';
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"Time: "<< duration.count()<<"microsecs\n";
    return 0;
}