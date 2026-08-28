#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name[20];
    string id[20];
    string phone[20];
    for (int i = 0; i < 20; i++)
    {
        cout << " Student " << i + 1;

        cout << "Enter name: ";
        getline(cin, name[i]);

        cout << "Enter student ID: ";
        getline(cin, id[i]);

        cout << "Enter phone number: ";
        getline(cin, phone[i]);
    }

    cout << "\n====================================\n";

    for (int i = 0; i < 20; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name       : " << name[i] << endl;
        cout << "Student ID : " << id[i] << endl;
        cout << "Phone      : " << phone[i] << endl;
    }

    cout << "\n====================================\n";
    cout << "Total students: " << 20 << endl;

    return 0;
}