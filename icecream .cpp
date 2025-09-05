#include <bits/stdc++.h>
using namespace std;

void icecreamparlor(int m, vector<int> arr) {
    unordered_map<int,int> mp;
    for (int i = 0; i < arr.size(); i++) {
        int needed = m - arr[i];
        if (mp.find(needed) != mp.end()) {
            
            cout << mp[needed]+1 << " " << i+1 << endl;
            return;
        }
        mp[arr[i]] = i;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int m, n;
        cin >> m >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        icecreamparlor(m, arr);
    }
}
