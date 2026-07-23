#include <iostream>
using namespace std;
int main() {
    string name;
    cin>>name;
int l=name.length();
int count=0;
    for(int i=0; i<l; i++){
        bool a=false;
for(int j=0; j<i; j++){
            if(name[i]==name[j]){
                a=true;
            }
        }
        if(a==false){
            count=count+1;
        }
    }
if(count%2==0){
        cout<<"Chat with her"<<endl;
    }else{
        cout<<"Ignore him"<<endl;
    }
    return 0;
}