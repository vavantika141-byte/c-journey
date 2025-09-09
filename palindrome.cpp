#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Solution {
private:
    stack<char> s;
    queue<char> q;

public:
    void pushCharacter(char ch) {
        s.push(ch);
    }

    void enqueueCharacter(char ch) {
        q.push(ch);
    }

    char popCharacter() {
        char top = s.top();
        s.pop();
        return top;
    }

    char dequeueCharacter() {
        char front = q.front();
        q.pop();
        return front;
    }
};

int main() {
    string s;
    getline(cin, s);

    Solution obj;

    // Push and enqueue all characters
    for (char c : s) {
        obj.pushCharacter(c);
        obj.enqueueCharacter(c);
    }

    // Compare characters from stack and queue
    bool isPalindrome = true;
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome." << endl;
    } else {
        cout << "The word, " << s << ", is not a palindrome." << endl;
    }

    return 0;
}
