Guide too use vector containers defined inside standard template library (STL):
Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled to automatically by the container.

syntax: vector< data type of element> name;
Ex- vector<int> arr;

Some useful methods of vector:

1.begin() – Returns an iterator pointing to the first element in the vector
2.end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
3.rbegin() – Returns a reverse iterator pointing to the last element in the ve ctor (reverse beginning). It moves from last to first element
4.rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
5.cbegin() – Returns a constant iterator pointing to the first element in the vector.
6.cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
7.front() – Returns a reference to the first element in the vector
8.back() – Returns a reference to the last element in the vector
9.data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
10.size() – Returns the number of elements in the vector.
11.max_size() – Returns the maximum number of elements that the vector can hold.
12.resize(n) – Resizes the container so that it contains ‘n’ elements.
13.empty() – Returns whether the container is empty.
14.shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
15.at(g) – Returns a reference to the element at position ‘g’ in the vector

Implementation of some:

using namespace std; 
  
int main() 
{ 
    vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of cbegin and cend: "; 
    for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
        cout << *i << " "; 
  
    cout << "\nOutput of rbegin and rend: "; 
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
        cout << *ir << " "; 
  
    cout << "\nOutput of crbegin and crend : "; 
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
        cout << *ir << " "; 
  
    return 0; 
} 

Output of begin and end: 1 2 3 4 5 
Output of cbegin and cend: 1 2 3 4 5 
Output of rbegin and rend: 5 4 3 2 1 
Output of crbegin and crend : 5 4 3 2 1


Some useful modifiers:

1.assign() – It assigns new value to the vector elements by replacing old ones
2.push_back() – It push the elements into a vector from the back
3.pop_back() – It is used to pop or remove elements from a vector from the back.
4.insert() – It inserts new elements before the element at the specified position
5.erase() – It is used to remove elements from a container from the specified position or range.
6.swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
7.clear() – It is used to remove all the elements of the vector container

Implementation:

#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Assign vector 
    vector<int> v; 
  
    // fill the array with 10 five times 
    v.assign(5, 10); 
  
    cout << "The vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 15 to the last position 
    v.push_back(15); 
    int n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // removes last element 
    v.pop_back(); 
  
    // prints the vector 
    cout << "\nThe vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 5 at the beginning 
    v.insert(v.begin(), 5); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // removes the first element 
    v.erase(v.begin()); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // inserts at the beginning 
    
    // erases the vector 
    v.clear(); 
    cout << "\nVector size after erase(): " << v.size(); 
  
    // two vector to perform swap 
    vector<int> v1, v2; 
    v1.push_back(1); 
    v1.push_back(2); 
    v2.push_back(3); 
    v2.push_back(4); 
  
    cout << "\n\nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    // Swaps v1 and v2 
    v1.swap(v2); 
  
    cout << "\nAfter Swap \nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
} 


output:

The vector elements are: 10 10 10 10 10 
The last element is: 15
The vector elements are: 10 10 10 10 10 
The first element is: 5
The first element is: 10
Vector size after erase(): 0

Vector 1: 1 2 
Vector 2: 3 4 
After Swap 
Vector 1: 3 4 
Vector 2: 1 2






