#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    unordered_map<int,int> freq;       
    unordered_map<int,int> countOfFreq;
    vector<int> result;

    while (q--) {
        int type, val;
        cin >> type >> val;

        if (type == 1) { 
            int oldFreq = freq[val]++;
            countOfFreq[oldFreq]--;
            countOfFreq[oldFreq+1]++;
        } 
        else if (type == 2) { 
            if (freq[val] > 0) {
                int oldFreq = freq[val]--;
                countOfFreq[oldFreq]--;
                countOfFreq[oldFreq-1]++;
            }
        } 
        else if (type == 3) { 
            result.push_back(countOfFreq[val] > 0 ? 1 : 0);
        }
    }

    for (int x : result) cout << x << endl;
}
