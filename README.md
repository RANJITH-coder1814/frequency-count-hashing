# frequency-count-hashing
Count the frequency of elements in an array using hashing (unordered_map). This is one of the most fundamental and frequently asked problems in DSA.
# 🔢 Frequency Count using Hashing (C++)

## 📌 Problem Statement

Given an array of integers, count the frequency of each element.

## 🧠 Approach

We use a hash map (`unordered_map`) to store elements as keys and their frequencies as values.

### Steps:

1. Traverse the array
2. Store/update count in map
3. Print or return results

## ⏱️ Time Complexity

* **O(n)**

## 💾 Space Complexity

* **O(n)**

## 📥 Example

Input:

```
arr = [1, 2, 2, 3, 1, 4]
```

Output:

```
1 -> 2  
2 -> 2  
3 -> 1  
4 -> 1  
```

## 🚀 Code (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 1, 4};

    unordered_map<int, int> freq;

    // Count frequency
    for (int num : arr) {
        freq[num]++;
    }

    // Print frequency
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}
```

## 🔥 Key Concepts

* Hashing
* Unordered Map
* Frequency Counting

## 📚 Related Problems

* Two Sum
* First Non-Repeating Element
* Highest Frequency Element
* Intersection of Arrays

---

⭐ Star this repo if you find it helpful!
