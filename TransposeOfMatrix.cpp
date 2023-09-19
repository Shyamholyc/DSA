#include<iostream>
using namespace std;
void Transpose(int arr[][3],int r,int c,int transpose[][3]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transpose[j][i]=arr[i][j];
        }
    }
    cout<<"After transposing the elements of a matrix look like "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3];
    int r=3;
    int c=3;
    int transpose[3][3];
    cout<<"Enter Array elements "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          cin>>arr[j][i];
 }
    }
    Transpose(arr,r,c,transpose);
}