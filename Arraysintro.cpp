#include<iostream>
using namespace std;
int main(){
    //initialising an array 
 //   int arr[5]={1,2,3,4,5};
 //initialising an array by taking input from the user 
 int n;
 cout<<"Enter the size of an array "<<endl;
 cin>>n;
 int arr[n];
 //taking input
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 //printing the array 
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }


}