#include <iostream>
#include <algorithm>
using namespace  std;

//Swap Alternate
void swapAlt(int arr[],int n)
{
    for (int i=0;i<n; i=i+2){
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}




//Main function
int main(){
    int arr[6]={32,31,34,33,36,35};
    int n = sizeof(arr) / sizeof(arr[0]);


    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    swapAlt(arr, n);

    cout << "\nSwap Alternate Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}