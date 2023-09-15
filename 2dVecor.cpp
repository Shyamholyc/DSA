#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Creating a 2d dynnamic array i.e 2d vector
    vector<vector<int> >arr;

    vector<int> a{1,2,3};
    vector<int> b{2,3,4,5,6,7};
    vector<int> c{5,8,9};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    //here arr.size() represents the no. of rows
    //and arr[i].size() represents the no of columns in ith row
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}
