#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int max_sum = nums[0];
    int current_sum = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        current_sum = max(nums[i], current_sum + nums[i]);
        
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> nums2 = {1};
    vector<int> nums3 = {5, 4, -1, 7, 8};

    cout << "Maximum Elevation Gain for nums1: " << maxSubArray(nums1) << endl;
    cout << "Maximum Elevation Gain for nums2: " << maxSubArray(nums2) << endl; 
    cout << "Maximum Elevation Gain for nums3: " << maxSubArray(nums3) << endl;

    return 0;
}
