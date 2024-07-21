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
             cin.ignore();
            getline(cin, name);
            cout << "Enter roll: ";
             cin.ignore();
            cin >> roll;
            cout << "Enter marks: ";
             cin.ignore();
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
            cout << endl;
        }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student s[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter details of student " << i + 1 << ":" << endl;
        s[i].input();
    }

    cout << "\nStudent details are:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        s[i].display();
    }

    return 0;
}