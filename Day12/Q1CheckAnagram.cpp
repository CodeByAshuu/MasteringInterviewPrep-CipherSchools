#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false;

    unordered_map<char, int> charCount;
    for (char c : s) {
        charCount[c]++;
    }

    for (char c : t) {
        charCount[c]--;
        if (charCount[c] < 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s1 = "anagram", t1 = "nagaram";
    cout << "Are \"" << s1 << "\" and \"" << t1 << "\" anagrams? " 
         << (isAnagram(s1, t1) ? "true" : "false") << endl;

    string s2 = "rat", t2 = "car";
    cout << "Are \"" << s2 << "\" and \"" << t2 << "\" anagrams? " 
         << (isAnagram(s2, t2) ? "true" : "false") << endl;

    return 0;
}
