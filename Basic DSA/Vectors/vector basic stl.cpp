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


/*  LIST */

//A list in C++ STL is a doubly-linked list, 
//which allows elements to be efficiently inserted or deleted from both ends as well as from the middle.
//BETTER AND EFFICIENT IN OPERATIONS LIKE INSERTION OR DELETION
//using push_front and emplace_front
int last() {
   list<int> lst; //list is made same as vectors eg: list<int> lst ={1,2,3,2};
   lst.push_front(20);
   lst.emplace_front(10);  // Constructs 10 at the beginning
   for (int i : lst) {
       cout << i << " ";
   }
   return 0;
}
//output: 10 20


// /*DEQUE*/ similar to list
//A deque is a sequence container 
// with the ability to expand and contract on both ends efficiently.
// It supports fast insertions and deletions at both the beginning and the end
        
int deq() {
    deque<int> dq = {10, 20, 30};
    dq.push_front(0);  // Insert at the beginning
    dq.push_back(40);  // Insert at the end
    for (int i : dq) {
        cout << i << " ";
    }
    return 0;
}
//Expected Output: 0 10 20 30 40

/*                              STACK (LIFO)                               */

// provides a streamlined interface for adding and removing elements from one end,
// making it ideal for scenarios requiring dynamic data management and nested operations.

// USING PUSH / EMPLACE IN STACK - emplace is more efficient than usint push front - as it constructs the element in place
int stck() {
    stack<int> s; // defined similarly as vec , list, deque 
    s.push(10);
    s.emplace(20); // Emplace is similar to push

    cout << "Top element: " << s.top() << endl;
    return 0;
}
