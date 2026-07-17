#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int toLower(char ch){
    if(ch<='a' && ch>='z'){
        return ch;
    }else{
        char temp = ch -'A' + 'a';
        return temp
    }
}

int getLength(const char name[]) {
    int count = 0;

    while (name[count] != '\0') {
        count++;
    }

    return count;
}

void reverseChar(char name[]) {
    int start = 0;
    int end = getLength(name) - 1;

    while (start < end) {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

bool checkPalindrome(const char name[]) {
    int start = 0;
    int end = getLength(name) - 1;

    while (start < end) {
        if (toLower(name[start]) != toLower(name[end])) {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

int main() {
    int n;

    cout << "Enter the maximum length of the name: ";
    cin >> n;

    // Extra position for '\0'
    vector<char> name(n + 1);

    cout << "Enter the name: ";
    cin >> name.data();

    cout << "\nOriginal name: " << name.data() << endl;

    cout << "Length of character array: "
         << getLength(name.data()) << endl;

    // Check before reversing
    if (checkPalindrome(name.data())) {
        cout << "Palindrome: Yes" << endl;
    } else {
        cout << "Palindrome: No" << endl;
    }

    reverseChar(name.data());

    cout << "Reverse of character array: "
         << name.data() << endl;

    return 0;
}