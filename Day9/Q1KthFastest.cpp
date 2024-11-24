#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickselect(vector<int>& arr, int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high); 
        
        if (pi == k) {
            return arr[pi];
        }
        
        else if (pi > k) {
            return quickselect(arr, low, pi - 1, k);
        }
      
        else {
            return quickselect(arr, pi + 1, high, k);
        }
    }
    return -1;
}

int findKthSmallest(vector<int>& arr, int k) {
    return quickselect(arr, 0, arr.size() - 1, k - 1);
}

int main() {
    vector<int> times = {7, 10, 4, 3, 20, 15};
    int k = 3;
    
    int result = findKthSmallest(times, k);
    
    cout << "The " << k << "-th fastest time is: " << result << endl;
    
    return 0;
}
