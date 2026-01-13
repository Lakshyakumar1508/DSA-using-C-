#include <iostream>
#include <algorithm>
using namespace std;

// Input
void input(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
}

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

// Find Maximum Number in the array
int findMax(int arr[],int n)
{
    int maxVal=arr[0];
    for(int i=0 ;i<n ;i++)
    {
        if (maxVal<arr[i]){
            maxVal=arr[i];
        }
    }
    return maxVal;
}

// Find minimum number in the array

int findMin(int arr[],int n)
{
    int minVal=arr[0];

    for (int i=0 ; i<n ; i++)
    {
        if(minVal>arr[i]) 
            minVal =arr[i];
    }

    return minVal;
}

// Reverse the array
void reverseArray(int arr[], int n) 
{
    int start = 0;
    int end = n - 1;

    while (start < end)
     {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout<< "Reverse of array are ";
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;   

    cout << "Enter the length of array: ";
    cin >> n;

    int arr[n];

//    Input Function call
    input(arr, n);

    // Print function call
    print(arr,n);

    // Max Val of array
    cout <<"Maximum number of array is "<< findMax(arr,n) <<endl;

    // Min Val of array
    cout<<"Minimum number of array is " << findMin(arr,n) << endl;

    // Reverse
    reverseArray(arr,n);

    return 0;
}
