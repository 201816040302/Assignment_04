#include <iostream>
#include <ctime>
#include "Time.h"
using namespace std;
int main()
{
    time_t t1;
    time(&t1);
    Time T(t1);
    T.Put();
    cout << endl
         << endl;
    T.setHour(23);
    T.setMinute(59);
    T.setSecond(53);
for (int i = 0; i < 9; i++)
    {
        T.Put();
        T.add();
    }
}
