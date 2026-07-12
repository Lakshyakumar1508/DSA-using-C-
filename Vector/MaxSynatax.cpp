// 1. Declaration
vector<int> v;              // empty vector
vector<int> v(5);           // size = 5 (default 0)
vector<int> v(5, 10);       // size = 5, all elements = 10


// 2. Initialization
vector<int> v = {1, 2, 3, 4, 5};


//  3. Adding Elements
v.push_back(10);   // add at end
v.emplace_back(20); // faster (direct construction)


//  4. Access Elements
cout << v[0];        // normal access
cout << v.at(0);     // safe access
cout << v.front();   // first element
cout << v.back();    // last element


//  5. Traversal
✔️ Normal loop
for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
}
✔️ Range-based loop (MOST USED ✅)
for(int x : v){
    cout << x << " ";
}


//  6. Size & Capacity
v.size();     // number of elements
v.empty();    // check empty (true/false)


//  7. Sorting
sort(v.begin(), v.end());                  // ascending
sort(v.begin(), v.end(), greater<int>());  // descending

//  8. Searching
binary_search(v.begin(), v.end(), 5);  // returns true/false

//  9. Iterators (IMPORTANT 🔥)
vector<int>::iterator it;

for(it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
}
//  10. Insert & Delete
v.insert(v.begin(), 100);     // insert at beginning
v.erase(v.begin());           // delete first element
v.pop_back();                 // remove last


//  11. Clear & Resize
v.clear();        // remove all elements
v.resize(3);      // resize to 3 elements

//  12. 2D Vector (VERY IMPORTANT)
vector<vector<int>> mat(3, vector<int>(4, 0));