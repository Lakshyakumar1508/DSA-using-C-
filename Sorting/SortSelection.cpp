#include <iostream>
using namespace std;

void SelectionSort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main(){
    int arr[5]={10,3,8,5,1};
    int n=5;

    cout<< "Original Arr: ";
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl;

    SelectionSort(arr,n);
    cout<<"Sorted Arr: ";
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
}