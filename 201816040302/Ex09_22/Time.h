#define TIME_H
#include <ctime>
using namespace std;
class Time
{
public:
    Time(time_t);
    void add();
    void setTime(time_t);
    void setTime(int, int, int);
    int getHour();
    int getMinute();
    int getSecond();
    void Put();
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
private:
    int t;
};

