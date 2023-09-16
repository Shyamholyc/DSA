#include<iostream>
#include<limits.h>
using namespace std;
int GetMax(int arr[][4],int row,int col){
    int maxi=INT_MIN;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]>maxi){
            maxi=arr[i][j];
        }
    }
  }
  return maxi;
}
int main(){
    int arr[3][4];
    int row=3;
    int col=4;
    cout<<"Enter 3*4 array elements "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int MaximumElement=GetMax(arr,row,col);
    cout<<"Maximum Element found is "<<MaximumElement;
}
