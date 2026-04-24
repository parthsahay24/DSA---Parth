//vector basic structure
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
/*                              VECTOR BASIC                               */
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
        cout << i << " ";
    }
    return 0;
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


/*                              LIST                               */

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

// USING PUSH / EMPLACE IN STACK - emplace is more efficient than using push front - as it constructs the element in place
int stck_push() {
    stack<int> s; // defined similarly as vec , list, deque 
    s.push(10);
    s.emplace(20); // Emplace is similar to push

    cout << "Top element: " << s.top() << endl;
    return 0;
}
// USING TOP FUNCTION IN STACK - returns the top element of the stack.
int stck_top() {
    stack<int> s;
    s.push(10);
    s.push(20);
    
    cout << "Top element: " << s.top() << endl;
    return 0;
}
// output: Top element: 20

// USING POP FUNCTION IN STACK- Just removes the top element but does not return it, to return after pop we have to use top function. 
int stck_pop() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.pop();
    
    cout << "Top element after pop: " << s.top() << endl;
    return 0;
}

// SIMILAR TO ARRAYS OR VECTORS - WE CAN USE s.size() to get the size of the stack,
// s.empty() to check if the stack is empty,
// and s.swap() to swap contents with another stack.

int stck_empty() {
    stack<int> s;
    
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    
    s.push(10);
    
    cout << "Is stack empty after push? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}

/*                              QUEUE (FIFO)                               */

// A queue is a linear data structure that follows the First In First Out (FIFO) principle,
// elements are added at the back and removed from the front
/*For visual representation- see image in the Vectors folder */

// the function top which is used in stack is replaced by front and back in queue .
//can we still use top - the answer is no, it will give an error.
//rest of the functions are same as stack like push, pop, empty, size, swap etc.
int queue_front() {
    queue<int> q;
    q.push(10);
    q.emplace(20);//more efficient than push as it constructs the element in place
    
    cout << "Front element: " << q.front() << endl;//similarly pop,empty,size,swap as stack.
    return 0;
}


/*                              SET CONTAINER                               */
//stores unique elements in a sorted manner.
//stores unique elements in a sorted manner.
int set_ins() {
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.emplace(15); // Emplaces an element
    for(int x : s) {
        cout << x << " ";
        // Expected Output: 10 15 20
    }
    return 0;
}
// We can't use PUSH - But we can use EMPLACE or INSERT functions to add elements to a set.
// We can use these functions in a set container:
// inset/emplace - to add elements to the set   
// find - to check if an element exists in the set
// erase and size and empty and clear and count
// lower_bound and upper_bound - to find the range of elements in the set
// swap - to swap contents with another set 

/*                              MULTISET CONTAINER                               */
// Unlike a set, it does not enforce uniqueness.
// Ideal where duplicate elements are needed, such as counting occurrences or grouping similar items.
// While still maintaining the sorted order of elements.

int Multiset_ins() {
    multiset<int> ms;
    ms.insert(10);
    ms.insert(20);
    ms.insert(20);  // Duplicate element
    for(int x : ms) {
        cout << x << " ";
        // Expected Output: 10 20 20
    }
    return 0;
}
// We can use all functions that we use in a set container here too.


/*                              MAP                               */

// A map is a collection of key-value pairs where each key is unique and maps to a specific value.
// It provides fast retrieval of values based on their associated keys.

// Using insert, emplace and assignment operator to add elements to a map container.
int map_pushing() {
    map<int, string> m;
    m.insert({1, "one"});
    m.emplace(2, "two");  // Emplaces a key-value pair
    m[3] = "three";       // Assignment
    for(auto &p : m) {
        cout << p.first << ": " << p.second << "\n";
        // Expected Output:
        /* 
           1: one
           2: two
           3: three 
        */
    }
    return 0;
}

// we can use functions like find, erase, size, empty, clear, count, lower_bound, upper_bound and swap in map container too.


/*                              MULTIMAP                               */
// Allows storing multiple values for the same key in a sorted order.
// The functions we can use here are same as map container.
// only difference is that we can have duplicate keys here and 
// it will store all the values for the same key in a sorted manner.




// =============== CONCEPTS ================

/* ❶ Use and meaning of upper bound and lower bound:-
let's say value is :- 10 20 30 40
if we set lower bound to be 25 and upper bound to be 25 too. Let's see what it means:
🔸 lower_bound(25)

👉 Pehla element ≥ 25 → 30

🔸 upper_bound(25)

👉 Pehla element > 25 → 30

Prints 👉 ONLY 30 ka address milta hai, 30 & 40 nahi
we can print values on their addresses using pointers
*/

/* ❷                       NextPermutation Or i'th Rotation                          */
// i= k+1 th permutation of the given vector
// Here let's say we want to i=2th rotation;
int PermuRotation() {
    vector<int> v = {1,2,3};

    int k = 3;

    while(k--) {
        next_permutation(v.begin(), v.end());
    }

    for(int x : v) cout << x << " ";
    return 0;
} // output: 2 3 1
/*
All permutations of 1, 2, 3 are : 
1 2 3 - k=0
1 3 2 - k=1
2 1 3 - k=2
2 3 1 - k=3
3 1 2 - k=4
3 2 1 - k=5
*/


// Let's now print all of the above functions in main function here to see the output of all of them together.
int main() {
    vec();
    cout << endl;
    pus_b();
    cout << endl;
    fron();
    cout << endl;
    bck();
    cout << endl;
    iter();
    cout << endl;
    fore();
    cout << endl;
    erse();
    cout << endl;
    last();
    cout << endl;
    deq();
    cout << endl;
    stck_push();
    cout << endl;
    stck_top();
    cout << endl;
    stck_pop();
    cout << endl;
    stck_empty();
    cout << endl;
    queue_front();
    cout << endl;
    set_ins();
    cout << endl;
    Multiset_ins();
    cout << endl;
    map_pushing();
    cout << endl;
    PermuRotation();
    return 0;
}
