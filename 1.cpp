#include<iostream>
#include<string>
using namespace std;

class Student {
    private:
        string name;
        int roll;
        float marks;
        string address;

    public:
        void input() {
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter roll: ";
            cin >> roll;
            cout << "Enter marks: ";
            cin >> marks;
            cout << "Enter address: ";
            cin.ignore();
            getline(cin, address);
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Marks: " << marks << endl;
            cout << "Address: " << address << endl;
        }
};

int main() {
    Student s;
    cout << "Enter student details:" << endl;
    s.input();
    cout << "\nStudent details are:" << endl;
    s.display();
    return 0;
}