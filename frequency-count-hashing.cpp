#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 1, 4};

    unordered_map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }
}
