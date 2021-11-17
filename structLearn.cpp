#include <iostream>
using namespace std;

struct date
{
    int day, month, year;
    bool IsLeapYear()
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                    return true;
                else
                    return false;
            }
            else
                return true;
        }
        else
            return false;
    }
    bool Valid () {
        if (month > 0 && month <= 12) {
            if (month == 2) {
                if (IsLeapYear()) {
                    if (day > 0 && day <= 29) {
                        return true;
                    }
                } else {
                    if (day > 0 && day <= 28) {
                        return true;
                    }
                }
            } else if (month == 4 || month == 6 || month == 9 || month == 11) {
                if (day > 0 && day <= 30) {
                    return true;
                }
            } else {
                if (day > 0 && day <= 31) {
                    return true;
                }
            }
        }
        return false;
    }
    date(int _day, int _month, int _year)
    {
        // them code cua ban o day
        day = _day;
        month = _month;
        year = _year;
    }
    void getNextDay()
    {
        // them code cua ban o day
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
            if (day == 31)
            {
                day = 1;
                month++;
            }
            else
                day++;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day == 30)
            {
                day = 1;
                month++;
            }
            else
                day++;
            break;
        case 2:
            if (IsLeapYear())
            {
                if (day == 29)
                {
                    day = 1;
                    month++;
                }
                else
                    day++;
            }
            else
            {
                if (day == 28)
                {
                    day = 1;
                    month++;
                }
                else
                    day++;
            }
            break;
        case 12:
            if (day == 31)
            {
                day = 1;
                month = 1;
                year++;
            }
            else
                day++;
            break;
        }
    }
};

int main()
{
    // them code cua ban o day
    string s;
    cin >> s;
    date d(stoi(s.substr(0, 2)), stoi(s.substr(3, 2)), stoi(s.substr(6, 4)));
    if (d.Valid())
    {
       d.getNextDay();
       if (d.Valid())
       {
       printf("%02d/%02d/%04d", d.day, d.month, d.year);
       } else {
           printf("INVALID");
       }
    }
    else
    {
        cout << "INVALID";
    }
}
