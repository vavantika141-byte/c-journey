// 1e4- 10 * 10^4
// modulous -- returns remainder
// Challeng-1
/*
#include<iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    if(age<=0 && age>=17){
        cout<<"Child"<<endl;
    }
    else if(age>=18 && age<=64){
        cout<<"Adult"<<endl;
    }
    else{
        cout<<"Senior citizen";
    }
}
    */

// challenge -2
#include<iostream>
using namespace std;
int main(){
    int x, y, z;
    cin>>x>>y>>z;
    if(x>y && x>z){
        cout<<"X is max";
    }
    else if(y>x && y>z){
        cout<<"Y is max";
    }
    else{
        cout<<"Z is max";
    }
}
