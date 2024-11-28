D#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s) {
    unordered_map<char, char> matching = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };

    stack<char> st;

    for (char c : s) {
        if (matching.count(c)) {
            if (!st.empty() && st.top() == matching[c]) {
                st.pop();
            } else {
                return false; // Mismatch or stack is empty
            }
        } else {
            st.push(c);
        }
    }

    return st.empty();
}

int main() {
    // Example 1
    cout << isValid("()") << endl;
    cout << isValid("()[]{}") << endl;
    cout << isValid("(]") << endl; 
    cout << isValid("([])") << endl;

    return 0;
}
