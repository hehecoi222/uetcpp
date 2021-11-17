#include <iostream>

using namespace std;

struct Time
{
    int hour, minute, second;
    Time(int initHour, int initMinute, int initSecond)
    {
        //your code here
        hour = initHour;
        minute = initMinute;
        second = initSecond;
    }
    void getTimeDifference(Time other)
    {
        //your code here
        long int totalSeconds = (hour * 3600) + (minute * 60) + second;
        long int otherTotalSeconds = (other.hour * 3600) + (other.minute * 60) + other.second;
        long int difference = abs(totalSeconds - otherTotalSeconds);
        hour = difference / 3600;
        minute = (difference % 3600) / 60;
        second = difference % 60;
    }
};

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Time time1(hour,minute,second);
    cin >> hour >> minute >> second;
    Time time2(hour,minute,second);
    time1.getTimeDifference(time2);
    printf("%02d:%02d:%02d\n", time1.hour, time1.minute, time1.second);
    return 0;
}
