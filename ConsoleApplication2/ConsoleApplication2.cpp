

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int i, s;
    s = 0;
    for (i = 1; i <= 1000; i++)
    {
        s = s + i;
    }
    cout << "Сумма чисел от 1 до 1000 равна:" << s << endl;
    return 0;
}
    
