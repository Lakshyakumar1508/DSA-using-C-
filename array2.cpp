#include <iostream>
#include <algorithm>
using namespace std;



// Output
void print(const int arr[], int n) 
{
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Linear Search
int Linear(int arr[],int n, int num){
    for (int i=0;i<n;i++)
    {
        if(arr[i]==num) 
        {
             return i;
        }
    }
    return -1;
}

// Binary Search
//It was only the sorted array either increasing and decreasing 


int main(){
    int arr[]={24,45,85,65,75,36,88};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Output
    print(arr, n);

    // Linear Search
    int num = 85;
    int index = Linear(arr, n, num);

    if (index != -1) {
        cout << "Element " << num << " found at index " << index << endl;
    } else {
        cout << "Element " << num << " not found in array" << endl;
    }

    return 0;
}
