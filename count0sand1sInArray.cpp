#include<iostream>
using namespace std;
int countArray(int arr[],int size){
    int zerocount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zerocount++;
        }
    }
    return zerocount;
}
int countArray1(int arr[],int size){
    int onecount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            onecount++;
        }
    }
    return onecount;
}
int main(){
    int arr[10]={1,0,0,1,0,1,1,0,0,0};
    int size=10;
    int ZeroCount=countArray(arr,size);
    cout<<ZeroCount<<endl;
    int OneCount=countArray1(arr,size);
    cout<<OneCount;

}