//impede que múltiplas inclusões ocorram
#ifndef TIME_H
#define TIME_H

class Time {
  public:
    Time(int = 0, int = 0 ,int = 0);
    inline void setTime(int , int, int);
    inline void setHour(int);
    inline void setMinute(int);
    inline void setSecond(int);

    inline int getHour(void) { return hour; }
    inline int getMinute(void) { return minute; }
    inline int getSecond(void) { return second; }

    void printUniversal(void);
    void printStandard(void);

    void tick(void);

  private:
    int hour;
    int minute;
    int second;
};

#endif