/*
Write a program in CPP to find the “sum” of two objects of type 'time' with members – hour,
minute and second using the OOP concept. In the main function, “sum” function should be
invoked as object1.sum(object2,object3) as well as object1.sum(object2). (NOTE: DO NOT
RETURN OBJECT FOR THIS TASK)S
*/

#include <iostream>

class Time
{
    int hour, minute, second;

public:
    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void sum(Time t1, Time t2)
    {
        hour = t1.hour + t2.hour;
        minute = t1.minute + t2.minute;
        second = t1.second + t2.second;
    }
    void sum(Time t)
    {
        hour += t.hour;
        minute += t.minute;
        second += t.second;
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
    t1.sum(t2, t3);
    t1.display();
    t1.sum(t2);
    t1.display();
    return 0;
}