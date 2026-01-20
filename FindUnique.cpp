#include <iostream>
using namespace std;

//Find Unique in Array
int unique(int arr[] ,int n)
{
    int ans=0;
    for(int i=0; i<n; i++)
    {
        ans= ans^arr[i];
    }

    return ans;
}


int main()
{
    int arr[5]={1,2,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array:";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" " ;
    }

    cout<<"\n";

    cout<<"Unique Number in array is :"<<unique(arr,n);

    return 0;

}