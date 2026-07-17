#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void input(vector<int> &array){
    for(size_t i=0;i<array.size();i++){
        cout<<"Enter the array element for index "<< i <<": ";
        cin >> array[i];
    }
}

void print(const vector<int> &array){
    cout<<"\nArray: "; 
    for(int element: array){
        cout << element << " ";
    }
}

void findMax(const vector<int> &array){
    cout<<"\nMaximum Number in Array is: ";
    int max = array[0];
    for(size_t i=0; i<array.size(); i++){
        if(max < array[i]){ 
            max = array[i];
        }
    }
    cout<< max << endl;
}

void findMin(const vector<int> &array)
{
    int min=array[0];
    for(size_t i=0;i<array.size();i++)
    {
        if(min > array[i])
            {
            min=array[i];
        }
    }
    cout<<"Minimum Number is: " << min << endl;
}

void Reverse(vector<int> &array)
{
    int start=0;
    int end=array.size()-1;

    while(start < end){
        swap(array[start],array[end]);
        start++;
        end--;
    }

    cout<<"Reverse: ";
    for(int element:array){
        cout<< element << " ";
    }
}

void swapAlternative(vector<int> &array){
    for(size_t i=0;i<array.size();i+=2){
        if( (i+1) < array.size()){
            swap(array[i],array[i+1]);
        }
    }

    cout<<"Swap Alternate Element: ";
    for(int element: array){
        cout<<element<<" ";
    }

    cout<<endl;
}

int findUnique(const vector<int>& arr) {
    int unique = 0;

    for (int num : arr) {
        unique ^= num;
    }

    return unique;
}

int main(){
  int n;
  cout<< "Enter the length of the array: ";
  cin >>n;

  vector<int> array(n);

  input(array);
  print(array);
  findMax(array);
  findMin(array);
  swapAlternative(array);
  findUnique(array);

  auto maximum_element=*max_element(array.begin(),array.end());
  cout<<"Max Using Vector: "<< maximum_element <<endl;

  auto minimum_element=*min_element(array.begin(),array.end());
  cout<<"Minimum element using vector: "<< minimum_element <<endl;

  Reverse(array);
  return 0;
}