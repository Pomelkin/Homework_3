#include "pt4.h"
#include <string>
#include <fstream>
using namespace std;

void Solve()
{
    Task("TextFile20");
    ifstream file("e.txt");
    int n,count = 1;
    file >> n;
    int max= 0;
    for (int i = 0; i < n; i++)
    {
        int numb;
        file >> numb;
        numb > max ? count = 0 : max = max;
        numb > max ? max = numb : max = max;
        max == numb ? count += 1 : count = count;

    }
    file.close();
    pt << count ;
}
