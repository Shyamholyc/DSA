#include<iostream>
#include<limits.h>
using namespace std;
int GetMin(int arr[][3],int rows,int col){
    int mini=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
        if(arr[i][j]<mini){
           mini=arr[i][j];
          } 
        }
    }
    return mini;
}
int main(){
    int arr[3][3];
    int rows=3;
    int col=3;
    cout<<"Enter the Array elements "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
 int MinimumElement=GetMin(arr,rows,col);
 cout<<"Minimum element found is "<<MinimumElement;
    }