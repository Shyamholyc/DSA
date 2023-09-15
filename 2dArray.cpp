#include<iostream>
using namespace std;
int main(){
    //Declaration and initialisation 
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   //here 1st column represents no of rows and 2nd column represents the no of rows
   //Accessing elements 
   cout<<arr[1][1]<<endl;//indexing in array starts from 0 so here 1,1 means we are accessing 1th row 1th column i.e 5
   cout<<arr[0][0]<<endl;
   cout<<arr[2][2];
}