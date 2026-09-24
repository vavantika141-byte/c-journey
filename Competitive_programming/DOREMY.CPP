include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        if (mp.size() == 1) {
            cout << "YES\n";
        }
        else if (mp.size() == 2) {
            if (mp.begin()->second == n / 2 ||
                next(mp.begin())->second == n / 2) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
