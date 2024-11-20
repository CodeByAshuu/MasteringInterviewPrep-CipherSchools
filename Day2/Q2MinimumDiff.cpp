#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int findMinDifference(int arr[], int n, int m) {
    if (m > n) {
        return -1;
    }
    sort(arr, arr + n);
    
    int minDiff = INT_MAX;
    
    for (int i = 0; i <= n - m; i++) {
        int diff = arr[i + m - 1] - arr[i];
        minDiff = min(minDiff, diff);
    }
    
    return minDiff;
}

int main() {
    int arr[] = {7, 3, 2, 4, 9, 12, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 3;
    
    int result = findMinDifference(arr, n, m);
    cout << "The minimum difference is: " << result << endl;
    
    return 0;
}
