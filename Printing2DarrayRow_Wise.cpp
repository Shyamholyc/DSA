#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;
    //Taking input in 2d arrays(row-wise)
    for(int i=0;i<rows;i++){
        //for each ith row we are taking the input in jth col
        for(int j=0;j<cols;j++){
  cin>>arr[i][j];
        }
    }
    //printing 2d array (row wise )
    for(int i=0;i<rows;i++){
     for(int j=0;j<cols;j++){
        cout<<arr[i][j]<<" ";
     }
     cout<<endl;
    }
}