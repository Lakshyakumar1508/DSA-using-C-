#include <iostream>
using namespace std;

//Find Dupliate
int findDuplicate(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {
        if(arr[i]^arr[i]==0)
        return arr[i];
    }
}

int main(){
    int arr[4]={1,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<findDuplicate(arr,n);
    return 0;
}