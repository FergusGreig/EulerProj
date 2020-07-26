#include<iostream>
using namespace std;


int main()
{
int one9 = 3+3+5+4+4+3+5+5+4;// sum 1-9
int ten19 = 3+6+6+8+8+7+7+9+8+8; //10-19
int multens = 10*(6+6+5+5+5+7+6+6);// all the 20's 30's etc
int huntot = ((one9*9) + ten19 + multens); //1-99
int ands = (3*(891)); // all the 'and's from 101-999 
int hundred = (7*900);// all the 'hundreds' from 100-999
int thou = 11;  //1000
int one2ninehun = (one9*100);// all the 'one's etc from one hudred and...

int total = ((huntot*10) + ands + hundred + one2ninehun + thou);
 
cout<<total;
return 0;

}
// one two three four five six seven eight nine ten 
// twenty thirty forty fifty sixty seventy eighty ninety
// eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
// threehundredandtwentysix