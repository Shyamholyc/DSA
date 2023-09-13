#include<iostream>
using namespace std;
void ReverseArray(int arr[],int size){
int start=0;
int end=size-1;
while(start<=end){
     swap(arr[start],arr[end]);
     start++;
     end=end-1;
}
}
int main(){
    int arr[10]={1,3,42,22,33,44,55,66,77,99};
    int size=10;
ReverseArray(arr,10);
//printing the reverse array
for(int i=0;i<10;i++){
    cout<<arr[i]<<" ";
}
}