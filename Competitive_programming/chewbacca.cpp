#include<iostream>
using namespace std;
int main(){
    string x;
    cin>>x;
    int length= x.length();
    for(int i=0; i<length; i++){
        int digit= x[i]-'0';
        int inverted= 9-digit;
        if(i==0){
            if(inverted< digit&& inverted!=0){
                digit = inverted;
            }
        }
        else{
            if(inverted<digit){
                digit=inverted;
            }
        }
        x[i]=digit+'0';

    }
    cout<<x<<endl;
    return 0;
}