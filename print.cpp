#include <iostream>
#include <vector>
using namespace std;
template <typename T>
void printArray(vector<T> arr) {
    for (auto &element : arr) {
        cout << element << endl;
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> intArray(n);
    for (int i = 0; i < n; i++) {
        cin >> intArray[i];
    }
    printArray(intArray);
    cin >> n;
    vector<string> stringArray(n);
    for (int i = 0; i < n; i++) {
        cin >> stringArray[i];
    }
    printArray(stringArray);
    return 0;
}