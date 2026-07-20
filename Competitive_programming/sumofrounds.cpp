#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int test=0; test<t; test++){
        string s;
        cin>>s;
        int len = s.length();

        // first, count how many non-zero digits there are
        int count=0;
        for(int i=0; i<len; i++){
            if(s[i]!='0'){
                count++;
            }
        }
        cout<<count<<endl;
        // now print each round number
        for(int i=0; i<len; i++){
            if (s[i]!='0'){
                // print the digit followed by the right number of zeroes
                cout<<s[i];
                for(int j=i+1;j<len;j++){
                    cout<<'0';
                }
                cout<<" ";
            }
        }
        cout<<endl;
    }
return 0;
}