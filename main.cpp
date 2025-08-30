#include <iostream>
#include <string>
using namespace std;

float calculateAverage(float math, float science, float english) {
    return (math + science + english) / 3;
}

char getGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 75) return 'B';
    else if (average >= 60) return 'C';
    else if (average >= 50) return 'D';
    else return 'F';
}


char getGrade(float average) {
    if (average >= 90) return 'A';
    else if (average >= 75) return 'B';
    else if (average >= 60) return 'C';
    else if (average >= 50) return 'D';
    else return 'F';
}

int main() {
    string name;
    float math, science, english;

    cout << "Welcome to Mini Student Grading System!" << endl;
    cout << "----------------------------------------" << endl;

    // Input student name
    cout << "Enter student name: ";
    getline(cin, name);

    // Input marks
    cout << "Enter marks for Math: ";
    cin >> math;
    cout << "Enter marks for Science: ";
    cin >> science;
    cout << "Enter marks for English: ";
    cin >> english;

    
    float average = calculateAverage(math, science, english);
    char grade = getGrade(average);

    
    cout << "\nStudent: " << name << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;

    
    cout << "\nMotivational Messages:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << ". Keep learning and coding every day!" << endl;
    }

    return 0;
}
