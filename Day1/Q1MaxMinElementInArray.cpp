//Linear Search Approach
#include <iostream>
#include <vector>
using namespace std;

void findMinMaxLinear(const vector<int>& arr, int& minElement, int& maxElement) {
    minElement = arr[0];
    maxElement = arr[0];
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minElement, maxElement;
    findMinMaxLinear(arr, minElement, maxElement);

    cout << "Minimum element is: " << minElement << endl;
    cout << "Maximum element is: " << maxElement << endl;

    return 0;
}


//method 2? Pairwise comparision

#include <iostream>
#include <vector>
using namespace std;

void findMinMaxPairwise(const vector<int>& arr, int& minElement, int& maxElement) {
    int n = arr.size();
    int i;

    if (n % 2 == 0) {
        if (arr[0] < arr[1]) {
            minElement = arr[0];
            maxElement = arr[1];
        } else {
            minElement = arr[1];
            maxElement = arr[0];
        }
        i = 2;
    } else {
        minElement = maxElement = arr[0];
        i = 1; 
    }

    while (i < n - 1) {
        if (arr[i] < arr[i + 1]) {
            if (arr[i] < minElement) minElement = arr[i];
            if (arr[i + 1] > maxElement) maxElement = arr[i + 1];
        } else {
            if (arr[i + 1] < minElement) minElement = arr[i + 1];
            if (arr[i] > maxElement) maxElement = arr[i];
        }
        i += 2; // Increment by 2 as we are processing in pairs
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minElement, maxElement;
    findMinMaxPairwise(arr, minElement, maxElement);

    cout << "Minimum element is: " << minElement << endl;
    cout << "Maximum element is: " << maxElement << endl;

    return 0;
}
