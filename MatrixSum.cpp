#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{0,0,0}};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<"Sum of Matrix is "<<sum;
}