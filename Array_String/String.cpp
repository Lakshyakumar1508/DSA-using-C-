#include <iostream>
using namespace std;

int main() {
    string name = "Lakshya";

    // Length
    int length = name.length();

    // push_back (add character at end)
    name.push_back('K');
    cout << "After push_back: " << name << endl;

    // pop_back (remove last character)
    name.pop_back();
    cout << "After pop_back: " << name << endl;

    // Final output
    cout << "Name: " << name << endl;
    cout << "Length: " << length << endl;

    return 0;
}