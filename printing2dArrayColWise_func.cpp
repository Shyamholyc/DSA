#include<iostream>
using namespace std;
void PrintArray(int arr[][3],int rows,int cols){
    cout<<"Printing array (col-wise)"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;
    //Taking input (row-wise)
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    PrintArray(arr,rows,cols);
}