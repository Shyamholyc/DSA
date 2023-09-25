#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
          return i;
          }
    }
    return -1;
}
int main(){
    int arr[10]={2,55,84,5,4,1,32,14,45};
    int size =10;
    int key=14;
   int found= linearSearch(arr,size,key);
   if(found==-1){
    cout<<"Element not found ";
   }
   else{
    cout<<"Element found at index "<<found;
   }
    
}