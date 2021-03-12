#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::stoi;
using std::string;

#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h"

Time::Time(int hr, int min, int sec) {
  setTime(hr, min, sec);  
}

Time::Time(void) {
  time_t currentTime (time(NULL));
  string timer (ctime(&currentTime));
  
  string hr (1, timer[11]), min (1, timer[14]), sec (1, timer[17]);
  hr += timer[12];
  min += timer[15];
  sec += timer[18];

  setTime(stoi(hr), stoi(min), stoi(sec));
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
