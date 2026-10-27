#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string studentName;
    double grade1, grade2, grade3;

    cout << "Enter student's name: ";
    getline(cin, studentName);

    cout << "Enter grade for Course 1 (0-100): ";
    if (!(cin >> grade1)) {
        cout << "INVALID Score" << endl;
        return 0;
    }

    cout << "Enter grade for Course 2 (0-100): ";
    if (!(cin >> grade2)) {
        cout << "INVALID Score" << endl;
        return 0;
    }

    cout << "Enter grade for Course 3 (0-100): ";
    if (!(cin >> grade3)) {
        cout << "INVALID Score" << endl;
        return 0;
    }

    if (grade1 < 0 || grade1 > 100 ||
        grade2 < 0 || grade2 > 100 ||
        grade3 < 0 || grade3 > 100) {
        cout << "INVALID Score" << endl;
        return 0;
    }

    double average = (grade1 + grade2 + grade3) / 3.0;
    char academicGrade;

    if (average >= 90) {
        academicGrade = 'A';
    } else if (average >= 80) {
        academicGrade = 'B';
    } else if (average >= 70) {
        academicGrade = 'C';
    } else if (average >= 60) {
        academicGrade = 'D';
    } else {
        academicGrade = 'F';
    }

    cout << "\nStudent Name: " << studentName << endl;
    cout << fixed << setprecision(2);
    cout << "Final Average: " << average << endl;
    cout << "Academic Grade: " << academicGrade << endl;

    return 0;
}
