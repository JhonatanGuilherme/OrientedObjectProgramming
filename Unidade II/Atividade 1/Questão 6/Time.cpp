#include <iostream>
using std::cout;
using std::endl;

//biblioteca que permite alguns controles sobre a saída
#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h"

Time::Time(int hr, int min, int sec) {
  setTime(hr, min, sec);  
}

void Time::setTime(int h, int m, int s) {
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

void Time::setHour(int h) {
  hour = (h >=0 && h < 24) ? h : 0;
}

void Time::setMinute(int m) {
  minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::setSecond(int s) {
  second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printUniversal(void) {
  cout << setfill('0') << setw(2) << getHour() << ":" <<
  setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard(void) {
  cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}

void Time::tick(void) {
  (getSecond() < 59 ? setSecond(getSecond() + 1) :
   (setSecond(0), (getMinute() < 59 ? setMinute(getMinute() + 1) :
                   (setMinute(0), (getHour() < 23 ? setHour(getHour() + 1) :
                                   setHour(0))))));
}
