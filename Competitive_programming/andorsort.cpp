#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int zeros = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') zeros++;
        }
 
        if (s[0] == '1') {
            cout << zeros << "\n";
            continue;
        }
 
        int ones = 0, ans = n;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones++;
            else zeros--;
            if (ones + zeros < ans) ans = ones + zeros;
        }
        cout << ans << "\n";
    }
    return 0;
}
→