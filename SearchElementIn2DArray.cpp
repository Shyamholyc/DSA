#include<iostream>
using namespace std;
int SearchElement(int brr[][3],int r,int c,int key){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if(brr[i][j]==key){
            return 1;
        }
        }
    }
    return -1;
}
int main(){
    int brr[4][3];
    cout<<"Enter 4*3 Array elements "<<endl;
    int r=4;
    int c=3;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>brr[i][j];
        }
    }
 int key;
 cout<<"Enter the key element to Search "<<endl;
 cin>>key;
    int Found= SearchElement(brr,r,c,key);
 if(Found==-1){
    cout<<"Elemet not found ";
 }
 else{
    cout<<"Element found ";
 }
}