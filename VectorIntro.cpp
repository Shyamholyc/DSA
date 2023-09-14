#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;//Creating a dynamic array or vector
      cout<<arr.size()<<endl;
     cout<<arr.capacity()<<endl;
     arr.push_back(5);//inserting  element to the vector
     arr.push_back(6);
     //printing the vector is same like an array here size goes to arr.size()
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
     }
        arr.pop_back();//removing last inserted element works on stack operation 
     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
     }
     vector<int> brr(10);//creating another vector of size 10 having each entry 0
      cout<<brr.size()<<endl;
      for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
      }
          }
