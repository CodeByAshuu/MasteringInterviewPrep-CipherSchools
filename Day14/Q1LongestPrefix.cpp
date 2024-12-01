#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs[strs.size() - 1];
    string prefix = "";

    for (int i = 0; i < first.size(); i++) {
        if (first[i] == last[i]) {
            prefix += first[i];
        } else {
            break;
        }
    }

    return prefix;
}

int main() {
    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};

    cout << "Common prefix for {\"flower\", \"flow\", \"flight\"}: " 
         << longestCommonPrefix(strs1) << endl;

    cout << "Common prefix for {\"dog\", \"racecar\", \"car\"}: " 
         << longestCommonPrefix(strs2) << endl;

    return 0;
}
