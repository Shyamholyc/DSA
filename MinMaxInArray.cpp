#include<iostream>
#include<limits.h>
using namespace std;
int minArr(int arr[],int size){
    int mini=INT_MAX;
for(int i=0;i<size;i++){
if(arr[i]<mini){
    mini=arr[i];
}
}
return mini;
}
int maxArr(int arr[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>INT_MIN){
            maxi=arr[i];
        }
    }
    return maxi;
}
int main(){
    int arr[5]={10,20,30,40,50};
    int size=5;
 cout<<"Minimum element in array is "<<minArr(arr,5)<<endl;
 cout<<"Maximum element in an array is "<<maxArr(arr,5);
}