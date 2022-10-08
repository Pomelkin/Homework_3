#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a = 0;
    int max_ch = 1;
    setlocale(LC_ALL, "Russian");
    do
    {
        cout << "\nВведите а\n";
        cin >> a;
        if ((abs(a) % 2 == 0) && (a > max_ch))
        {
            max_ch = a;
        }
    } while (a != 0);
    if (max_ch == 1)
    {
        cout << "таких чисел нет";
    }
    else
    {
        cout << max_ch;
    }
}

//числа            ответ 
//1,2,9,5,0        6
//a                нет
//-2,-3,-1,0       Нет чисел
//3,4,h            4
//0.1              Нет чисел
//-1,2,4,0.001     4