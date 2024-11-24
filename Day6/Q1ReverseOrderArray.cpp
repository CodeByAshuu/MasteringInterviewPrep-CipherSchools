#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr1 = {1, 4, 3, 2, 6, 5};
    reverseArray(arr1);
    cout << "Reversed array: ";
    printArray(arr1);

    vector<int> arr2 = {4, 5, 1, 2};
    reverseArray(arr2);
    cout << "Reversed array: ";
    printArray(arr2);

    return 0;
}
