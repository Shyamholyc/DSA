#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{10,20,30,40,50,60};
    //que-print the pairs whoose sum is 80
    int sum =80;
    //traversing on outer loop 
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        //for every element we are traversing on next element i.e j=i+1
        for(int j=i+1;j<arr.size();j++){
          if(element+arr[j]==sum){
            cout<<"("<<element<<","<<arr[j]<<")"<<endl;
          }
        }

    }
}