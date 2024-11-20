#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> numSet;
    
    for (int num : nums) {
        if (numSet.find(num) != numSet.end()) {
            return true;
        }
        numSet.insert(num);
    }
    
    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};
    if (containsDuplicate(nums)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}
