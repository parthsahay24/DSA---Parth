//vector basic structure
#include <bits/stdc++.h>
using namespace std;

int vec() {
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
// Expected Output: 1 2 3 4 5

//using push back function of vectors in c++
int pus_b() {
    vector<int> v = {1, 2, 3};
    v.push_back(4);
    v.push_back(5);
    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
// Expected Output: 1 2 3 4 5

// using front function in vector 
int fron() {
    vector<int> v = {10, 20, 30};
    cout << "Front element: " << v.front();
    return 0;
}
// Expected Output: Front element: 10

// using back function in vector 
int bck() {
    vector<int> v = {10, 20, 30};
    cout << "Back element: " << v.back();
    return 0;
}
// Expected Output: Back element: 30

//iterator in vectors
int iter() {
    vector<int> v = {10, 20, 30};
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    return 0;
}
//Expected Output: 10 20 30

// for each loop in vectors
int fore(){
    vector<int> v={10,20,30};
    for(int i:v){
        cout i;
    }
}
//Expected Output: 10 20 30

//using erase function 
int erse() {
    vector<int> v = {10, 20, 30};
    v.erase(v.begin() + 1);
    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}
//output: 10 30

