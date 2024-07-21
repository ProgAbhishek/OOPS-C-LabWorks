#include <iostream>
using namespace std;

class Time {
    private:
        int hour;
        int minute;
        int second;

    public:
        // Constructor
        Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

        // Display time
        void display() {
            cout << hour << " hour(s) " << minute << " minute(s) " << second << " second(s)" << endl;
        }

        // Sum of two times
        void sum(const Time& t1, Time& result) {
            int totalSeconds = second + t1.second;
            int carryMinutes = totalSeconds / 60;
            totalSeconds %= 60;
            int totalMinutes = minute + t1.minute + carryMinutes;
            int carryHours = totalMinutes / 60;
            totalMinutes %= 60;
            int totalHours = hour + t1.hour + carryHours;
            result.hour = totalHours % 24;
            result.minute = totalMinutes;
            result.second = totalSeconds;
        }

        // Sum of two times (overloaded)
        void sum(const Time& t1) {
            Time result;
            sum(t1, result);
            display();
            cout << " + ";
            t1.display();
            cout << " = ";
            result.display();
        }
};

int main() {
    Time t1(2, 30, 0);
    Time t2(1, 45, 0);
    Time t3;

    cout << "Time 1: ";
    t1.display();
    cout << "Time 2: ";
    t2.display();

    t1.sum(t2, t3);
    cout << "Sum: ";
    t3.display();

    cout << "Sum using overloaded function: ";
    t1.sum(t2);

    return 0;
}