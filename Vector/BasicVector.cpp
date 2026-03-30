#include <iostream>
#include <vector>
using namespace std;


int main()
{
    //create vector, declare

    vector<int>v;
    vector<int>v1(5,1);
    vector<int>v2={1,2,3,4,5,6};

    //size and capacity

    cout<<"Size of v:"<<v.size()<<endl;
    cout<<"Capacity of v:"<<v.capacity()<<endl;
    cout<<endl;

    cout<<"Size of v1:"<<v1.size()<<endl;
    cout<<"Capacity of v1:"<<v1.capacity()<<endl;
    cout<<endl;

    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(1);

    cout<<"Size After insertion of v:"<<v.size()<<endl;
    cout<<"Capacity after insertion of v:"<<v.capacity()<<endl;


    //Update value
    v[1]=5;
    v.insert(v.begin()+2,50);
    cout<<endl;
    for(auto i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    

    //Pop operation
    v.pop_back(); //remove from the last
    v.erase(v.begin()+1); //remove from the index
    v.clear(); //remove all the element
    cout<<endl;
    cout<<"Size After deletion of v:"<<v.size()<<endl;
    cout<<"Capacity after deletion of v:"<<v.capacity()<<endl;
    cout<<endl;


    //Print 
    cout<<"vector1 :";
    for(auto i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;

    cout<<"Vector2: ";
    for (auto i=0;i<v1.size(); i++){
        cout<< v1[i]<<" ";
    }

    cout<<endl;
    
    cout<<"Vector3: ";
    for (auto i=0;i<v2.size(); i++){
        cout<< v2[i]<<" ";
    }

    cout<<endl;

    cout<<v2[0]<<endl;
    cout<<v2.front()<<endl;
    cout<<v2[v2.size()-1]<<endl;
    cout<<v2.back()<<endl;


    //Copy value of 1 vector to another
    vector<int>a;

    a=v2;
    cout<<"A.size:"<<a.size();

    cout<<endl<<"A values: ";
    for(auto i:a)
    cout<<i<<" ";

}