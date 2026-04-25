#include <iostream>
using namespace std;

// Method 1: Basic Traversal and Counting
int Normal_Counting() {
    int arr[] = {5, 6, 5, 6, 9, 6};
    int count = 0;
    for(int i = 0; i < 6; i++) {
        if(arr[i] == 6) {
            count++;
        }
    }
    cout << count << endl;  // Output: 3
    return 0;
}
// Time Complexity: O(N)
// Space Complexity: O(1)

// Method 2: Hashing for Efficient Counting
int Hashing_Counting() {
    int arr[] = {5, 6, 5, 6, 9, 6};
    int hashTable[10] = {0};
    for(int i = 0; i < 6; i++) {
        hashTable[arr[i]]++;
    }
    cout << hashTable[6] << endl;  // Output: 3
    return 0;
}
// Time Complexity: For preprocessing → O(N), and for answer individual query → O(1)
// Space Complexity: O(N) or O(maxElement)