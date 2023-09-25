#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[20];
    int n;
    cout<<"Enter the size of an  array "<<endl;
    cin>>n;
    cout<<"Enter the elements in an array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
   cout<<"Enter the key to search "<<endl;
   cin>>key;
    int found=LinearSearch(arr,n,key);
    if (found==-1){
        cout<<"Element not found ";
    }
    else{
        cout<<"Element found at index "<<found;
    }
}