#include<iostream>
using namespace std;

int PeakIndex(int arr[],int size){
        int s=0,e=size-1;

    while(s<e){
        int mid=s+((e-s)/2);

    if(arr[mid] < arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

int main(){
    int arr[4]={3,4,5,1};

    cout<<"Peak Index :"<<PeakIndex(arr,4)<<endl;
    cout<<"Peak Value :"<<arr[PeakIndex(arr,4)] <<endl;

    return 0;
}