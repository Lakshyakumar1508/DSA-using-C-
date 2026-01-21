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
int Linear(int arr[],int size, int num){
    for (int i=0;i<size;i++)
    {
        if(arr[i]==num) 
        {
             return i;
        }
    }
    return -1;
}

// Binary Search
//It was only the sorted array either increasing and decreasing means montonic function
int Binary(int arr[],int size, int num){
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        int mid=(start+((end-start)/2));

        if(arr[mid] == num)
        {
            return mid;
        }

        if(num >arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    // int arr[] = {24, 45, 85, 65, 75, 36, 88}; // Binary Search : Element 85 not found in array
    int arr[]={24, 36, 45, 65, 75, 85, 88};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    // Output
    print(arr, size);

    // Linear Search
    int num = 85;
    int index = Linear(arr, size, num);

    if (index != -1) {
        cout << "Linear Search : Element " << num << " found at index " << index << endl;
    } else {
        cout << "Linear Search : Element " << num << " not found in array" << endl;
    }


    //Binary Search
    int index1=Binary(arr,size,num);

    if (index1 != -1) {
        cout << "Binary Search : Element " << num << " found at index " << index << endl;
    } else {
        cout << "Binary Search : Element " << num << " not found in array" << endl;
    }

    return 0;
}
