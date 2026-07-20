#include <iostream>
using namespace std;
int main() {
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int maxVal = x1;
    if (x2>maxVal) {
        maxVal=x2;
    }
    if (x3>maxVal) {
        maxVal=x3;
    }
    //Assume x1 is maxvalue, then if x2 is max it becomes maxvalue and if x3 is max ,then if x3 is max it becomes maxvalue

    int minVal=x1;
    if (x2<minVal) {
        minVal=x2;
    }
    if (x3<minVal) {
        minVal=x3;
    } 
    //Assume x1 is min then it is a minvalue, then if x2 is min it becomes minvalue and if x3 is min ,then if x3 is min it becomes minvalue

int answer=maxVal-minVal;
   cout<<answer<<endl;
    return 0;
}