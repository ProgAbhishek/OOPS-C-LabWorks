// Write above program(task#5) in CPP which returns 'time' object after addition.
#include <iostream>
using namespace std;

class Time
{
    int hour;
    int minute;
    int second;
    public:
        Time(int h, int m, int s)
        {
            hour = h;
            minute = m;
            second = s;
        }
        Time sum(Time t1, Time t2)
        {
            Time t3(0, 0, 0);
            t3.hour = t1.hour + t2.hour;
            t3.minute = t1.minute + t2.minute;
            t3.second = t1.second + t2.second;
            return t3;
        }
        Time sum(Time t)
        {
            hour += t.hour;
            minute += t.minute;
            second += t.second;
            return *this;
        }
        void display()
        {
            std::cout << "Time: " << hour << " hours, " << minute << " minutes, " << second << " seconds" << std::endl;
        }
};

int main()
{
    Time t1(1, 2, 3);
    Time t2(4, 5, 6);
    Time t3(7, 8, 9);
    Time t4 = t1.sum(t2, t3);
    t4.display();
    Time t5 = t1.sum(t2);
    t5.display();
    return 0;
}
