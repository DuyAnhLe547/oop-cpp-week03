#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int N = 20;     // Number of students

    // Create 3 arrays
    string names[N];
    string ids[N];
    string phones[N];


    // =========================
    // Assign values
    // =========================

    // Student 1 - index 0
    names[0] = "Nguyen Van A";
    ids[0] = "23110001";
    phones[0] = "0901234567";

    // Student 2 - index 1
    names[1] = "Tran Thi B";
    ids[1] = "23110002";
    phones[1] = "0912345678";

    // Student 3 - index 2
    names[2] = "Le Van C";
    ids[2] = "23110003";
    phones[2] = "0987654321";

    // Student 4 - index 3
    names[3] = "Pham Van D";
    ids[3] = "23110004";
    phones[3] = "0900000004";

    // Student 5 - index 4
    names[4] = "Hoang Thi E";
    ids[4] = "23110005";
    phones[4] = "0900000005";

    // Student 6 - index 5
    names[5] = "Nguyen Minh Anh";
    ids[5] = "23110006";
    phones[5] = "0900000006";

    // Student 7 - index 6
    names[6] = "Tran Gia Huy";
    ids[6] = "23110007";
    phones[6] = "0900000007";

    // Student 8 - index 7
    names[7] = "Le Bao Ngoc";
    ids[7] = "23110008";
    phones[7] = "0900000008";

    // Student 9 - index 8
    names[8] = "Pham Quang Huy";
    ids[8] = "23110009";
    phones[8] = "0900000009";

    // Student 10 - index 9
    names[9] = "Hoang Khanh Linh";
    ids[9] = "23110010";
    phones[9] = "0900000010";

    // Student 11 - index 10
    names[10] = "Nguyen Duc Anh";
    ids[10] = "23110011";
    phones[10] = "0900000011";

    // Student 12 - index 11
    names[11] = "Tran Minh Khang";
    ids[11] = "23110012";
    phones[11] = "0900000012";

    // Student 13 - index 12
    names[12] = "Le Phuong Anh";
    ids[12] = "23110013";
    phones[12] = "0900000013";

    // Student 14 - index 13
    names[13] = "Nguyen Tuan Kiet";
    ids[13] = "23110014";
    phones[13] = "0900000014";

    // Student 15 - index 14
    names[14] = "Pham Ngoc Han";
    ids[14] = "23110015";
    phones[14] = "0900000015";

    // Student 16 - index 15
    names[15] = "Tran Anh Khoa";
    ids[15] = "23110016";
    phones[15] = "0900000016";

    // Student 17 - index 16
    names[16] = "Le Hoang Nam";
    ids[16] = "23110017";
    phones[16] = "0900000017";

    // Student 18 - index 17
    names[17] = "Nguyen Thao Vy";
    ids[17] = "23110018";
    phones[17] = "0900000018";

    // Student 19 - index 18
    names[18] = "Do Minh Quan";
    ids[18] = "23110019";
    phones[18] = "0900000019";

    // Student 20 - index 19
    names[19] = "Vu Gia Bao";
    ids[19] = "23110020";
    phones[19] = "0900000020";


    // =========================
    // Access and display data
    // =========================

    cout << "====================================\n";
    cout << "           STUDENT LIST\n";
    cout << "====================================\n\n";

    // Student 1
    cout << "Student 1\n";
    cout << "Name       : " << names[0] << endl;
    cout << "Student ID : " << ids[0] << endl;
    cout << "Phone      : " << phones[0] << endl;

    // Student 2
    cout << "\nStudent 2\n";
    cout << "Name       : " << names[1] << endl;
    cout << "Student ID : " << ids[1] << endl;
    cout << "Phone      : " << phones[1] << endl;

    // Student 3
    cout << "\nStudent 3\n";
    cout << "Name       : " << names[2] << endl;
    cout << "Student ID : " << ids[2] << endl;
    cout << "Phone      : " << phones[2] << endl;

    cout << "\n... Continue the same pattern ...\n";

    cout << "\nStudent 20\n";
    cout << "Name       : " << names[19] << endl;
    cout << "Student ID : " << ids[19] << endl;
    cout << "Phone      : " << phones[19] << endl;

    return 0;
}