#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr;

    arr.push_back(6);
    arr.push_back(10);
    arr.push_back(2);
    arr.push_back(18);
    arr.push_back(5);
    arr.push_back(9);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    //sort in increasing order
    sort(arr.begin(),arr.end());

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl; 

    //sort in decreasing order
    // sort(arr.begin(),arr.end(),greater<int>());

    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }

    cout<<endl;

    //searching in binary search
    cout<<binary_search(arr.begin(),arr.end(),18)<<endl;
    cout<<binary_search(arr.begin(),arr.end(),28)<<endl;

    cout<<find(arr.begin(),arr.end(),18)-arr.begin();

}