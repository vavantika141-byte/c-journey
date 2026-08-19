#include <iostream>
using namespace std;
int main() {
    int A, B;
    char op;
    cin>>A>>op>>B;
    bool correct;
    if(op=='<')
        correct=(A < B);
    else if (op=='>')
        correct=(A > B);
    else
        correct = (A == B);

    if (correct)
        cout << "Right";
    else
        cout << "Wrong";

    return 0;
}