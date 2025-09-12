#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks;
    int n, m, sum = 0;

    cout << "Enter number of students: ";
    cin >> n;

    cout << "Enter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cin >> m;
        marks.push_back(m);
        sum += m;
    }

    cout << "\nMarks entered: ";
    for (int x : marks) cout << x << " ";

    cout << "\nAverage Marks = " << (float)sum / n << endl;

    return 0;
}
