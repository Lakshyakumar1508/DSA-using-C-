#include <iostream>
using namespace std;

//Minimum Pivot 
int getPivot(int arr[],int size){
    int s=0;
    int e=size-1;

    while(s<e){
        int m=s+(e-s)/2;

        if(arr[m]>=arr[0])
        {
            s=m+1;
        }else{
            e=m;
        }
    }
    return s;
}

//Maxium Pivot
int getMaxIndex(int arr[], int size) {
    int minIndex = getPivot(arr, size);
    return (minIndex - 1 + size) % size;
}



int main() {
    int arr[5] = {7, 9, 1, 2, 3};

    int minPivot = getPivot(arr, 5);
    int maxPivot = getMaxIndex(arr, 5);

    cout << "Minimum Pivot Index : " << minPivot << endl;
    cout << "Minimum Pivot Element : " << arr[minPivot] << endl;

    cout << "Maximum Pivot Index : " << maxPivot << endl;
    cout << "Maximum Pivot Element : " << arr[maxPivot] << endl;

    return 0;
}