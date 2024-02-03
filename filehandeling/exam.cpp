#include <iostream>
#include <fstream>
using namespace std;

// class to store information of each student
class Student {
public:
    int regNumber;
    string name;
    string program;
    string contactNumber;
    string address;
};

int main() {
    // open the file for writing
    ofstream outFile("students.txt");

    // write the information of 10 students to the file
    Student student;
    for (int i = 1; i <= 1; i++) {
        cout << "Enter information for student " << i << ":" << endl;
        cout << "Registration number: ";
        cin >> student.regNumber;
        cout << "Name: ";
        cin >> student.name;
        cout << "Program: ";
        cin >> student.program;
        cout << "Contact number: ";
        cin >> student.contactNumber;
        cout << "Address: ";
        cin >> student.address;
        outFile << student.regNumber << " " << student.name << " " << student.program << " " << student.contactNumber << " " << student.address << endl;
    }

    // close the file
    outFile.close();

    // open the file for reading
    ifstream inFile("students.txt");

    // read the information of all students from the file and display it on the console
    cout << "Information of all students:" << endl;
    while (inFile >> student.regNumber >> student.name >> student.program >> student.contactNumber >> student.address) {
        cout << "Registration number: " << student.regNumber << endl;
        cout << "Name: " << student.name << endl;
        cout << "Program: " << student.program << endl;
        cout << "Contact number: " << student.contactNumber << endl;
        cout << "Address: " << student.address << endl << endl;
    }

    // close the file
    inFile.close();

    return 0;
}
