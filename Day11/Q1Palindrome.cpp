#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    string filtered = "", rvrsd = "";

    for (char c : s) {
        if (isalnum(c)) {
            filtered += tolower(c);
        }
    }

    rvrsd = filtered;
    reverse(rvrsd.begin(), rvrsd.end());

    return filtered == rvrsd;
}

int main() {
    string a = "A man, a plan, a canal: Panama";
    string b = "race a car";

    cout << "Input: \"" << a << "\"\nOutput: " << (isPalindrome(a) ? "true" : "false") << endl;
    cout << "Input: \"" << b << "\"\nOutput: " << (isPalindrome(b) ? "true" : "false") << endl;

    return 0;
}
