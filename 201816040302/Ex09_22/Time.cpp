#include "Time.h"
#include <iostream>
#include <iomanip>
using namespace std;
Time::Time(time_t curSec)
{
	setTime(curSec);
}
void Time::add()
{
	t = (t + 1) % (24*60*30);
}
void Time::setTime(time_t curSec)
{
	t = (curSec + (8*60*60)) % (24*60*60);
}
int Time::getHour()
{
	return t/ 3600;
}
int Time::getMinute()
{
	return (t % 3600) / 60;
}
int Time::getSecond()
{
	return t % 60;
}
void Time::setTime(int h, int m, int s)
{
	setHour(h);
	setMinute(m);
	setSecond(s);
}

void Time::setHour(int h)
{
	if (h>=0&&h<=24)
	{
		t= t % 3600 + h * 3600;
	}
	else
	    cout << "error , hour out of range [0,23]" << endl;
	    return;
}
void Time::setMinute(int m)
{
	if (m>=0&&m<=60)
	{
		t= getHour() * 3600 + m * 60 + t % 60;
	}
	else
	   cout << "error, minute out of range [0,59]" << endl;
       return;
}
void Time::setSecond(int s)
{
	if (s>=0&&s<=60)
	{
		t = getHour() * 3600 + getMinute() * 60 + s;
	}
	else
	    cout << "error,second out of range [0,59]" << endl;
	    return;
}
void Time::Put()
{
    cout << setfill('0') << setw(2) << getHour() << ":"
		 << setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" 
	     << setfill('0') << setw(2) << getMinute() << ":" 
	     << setw(2) << getSecond() << (getHour() < 12 ? " aM" : " pM") << endl;
}
