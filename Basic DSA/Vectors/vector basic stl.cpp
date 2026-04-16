//vector basic structure
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
// Expected Output: 1 2 3 4 5

//using push back function of vectors in c++
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.push_back(5);
    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
// Expected Output: 1 2 3 4 5