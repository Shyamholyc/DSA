#include<iostream>
using namespace std;
void PrintSum(int arr[][3],int rows,int cols){
    cout<<"Printing Sum Row wise "<<endl;
    for(int i=0;i<rows;i++){
    int sum=0;
        for(int j=0;j<cols;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum;
        cout<<endl;
    }
}
int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;
    cout<<"Enter Array Elements "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    PrintSum(arr,rows,cols);

}