#include<iostream>
#include<sstream>
using namespace std;

int main()
{
 string nums = {"copy past number list here with backslashes at line ends"};

int i,no;
long long num;
long long sum=0;
string substring;
for (i=0;i<100;i++){

    no =50*i;
    substring =nums.substr(no,12);
    stringstream(substring)>> num;
    sum+=num;
}
    cout<<sum;
    return 0;
}