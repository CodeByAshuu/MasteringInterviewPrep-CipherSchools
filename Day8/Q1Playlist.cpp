#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool targestSumPair(const vector<int>& songs, int target) {
    unordered_set<int> songDurations;
    
    for (int song : songs) {
        if (songDurations.find(target - song) != songDurations.end()) {
            return true; 
        }
        
        songDurations.insert(song);
    }
    
    return false;
}

int main() {
    int T; 
    cin >> T;
    
    while (T--) {
        int n, target;
        cin >> n >> target;
        
        vector<int> songs(n);
        for (int i = 0; i < n; ++i) {
            cin >> songs[i];
        }
        
        if (targestSumPair(songs, target)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
