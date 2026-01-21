# include<iostream>
using namespace std;

//first occurance
int firstOcc(int arr[],int size,int num){
    int s=0,e=size-1;
    int ans=1;

    while(s<=e){
        int mid=s+((e-s)/2);

        if(arr[mid]==num){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid] < num){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

// Last Occurance
int lastOcc(int arr[],int size,int num){
    int s=0,e=size-1;
    int ans=1;

    while(s<=e){
        int mid=s+((e-s)/2);

        if(arr[mid]==num){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid] < num){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

//Main function
int main(){
    int arr[6]={2,3,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"First Occurance of 3 is Index "<<firstOcc(arr,size,3)<<endl;
    cout<<"Last Occurance of 3 is Index "<<lastOcc(arr,size,3)<<endl;
    return 0;
}