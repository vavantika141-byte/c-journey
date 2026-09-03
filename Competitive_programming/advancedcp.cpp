// INT_MIN= 2^31
// INT_MAX= 2^31 -1=== INT32 IS USED
// int data ype is represented in 32 bits
// LONG LONG is 2^63
// float/double/long double 7 digit/ 15 digit/ 18 digit
//INT_MAX+1 LEADS US BACK TO INT_MIN 
// 1e15 1 * 10^15 
#include<iostream>
#include <iomanip>
using namespace std;
int  main(){
    int a= INT32_MAX;
    int b= INT32_MIN;
    double d= 125.86793452364;
    cout<<fixed<<setprecision(6)<<d<<endl; //write cout<<fixed<<setprecision(value till the answer is expected )<<variable<<endl;
 cout<<a<<endl;
 cout<<b<<endl;
 return 0;
}

