#include "pt4.h"
#include <iostream>
#include <fstream>
using namespace std;

void Solve()
{
    Task("TextFile1");
    ofstream f("a.tst");
    int variable=0,a=0,b=1,minnum,maxnum;
    pt >> minnum >> maxnum;
    while (b < maxnum)
    {
        a += b;
        b += a;
        if ((a >= minnum) && (a <= maxnum))
        {
            f << a << "\n";
        }
        if ((b <= maxnum) && (b >= minnum))
        {
            f << b << "\n";
        }
    }
    f.close();

}
