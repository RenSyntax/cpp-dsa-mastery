#include <bits/stdc++.h>
using namespace std;

void vector() {
    
    // Vector is used when indexes is dynamic.

    vector <int> v; // Defines a empty countainer.

    v.push_back{1}; // Adds '1' to the empty countainer.
    v.emplace_back{3} // Adds '3' to the countainer just after '1'.
    // The final Countainer looks like ---> {1, 3}


    // Pair inside a vector
    vector <pair <int, int>> v2;
    v2.push_back{{1. 2}}; // Adds pair of '1' and '2' to countainer.
    v2.emplace_back{1, 2} // Does the same thing, but with diffirent syntax.

    vector <int> v3{5, 100}; // Countainer containing '100' five times already defined.
    vector <int> v4{5}; // Container containing garbage value five times already defined.
    vector <int> v5{v3}; // Copy of vector v3;
}