#include<iostream>
using namespace std;
int main(){
    int arr[3][3];
    //Taking input in 2d array (col-wise)
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    //printing 2d array (row-wise)
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
