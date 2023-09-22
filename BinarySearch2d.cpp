#include<iostream>
using namespace std;
// Binary Search on 2d Array 
bool BinarySearch(int arr[][4],int m,int n,int target){
    int s=0;
    int e=m*n-1;//as in 1d array end is total elements-1
    int mid=s+(e-s)/2;
    while(s<=e){
        int RowIndex=mid/n;
        int ColIndex=mid%n;
       if(arr[RowIndex][ColIndex]==target){
     cout<<"Element Found at index "<<RowIndex<<","<<ColIndex;
        return true;
       }
       if(arr[RowIndex][ColIndex]<target){
        //Search the element in right part 
        s=mid+1;
       }
       else if(arr[RowIndex][ColIndex]>target){
        e=mid-1;
       }
       mid=s+(e-s)/2;
    }
    return false;

}
int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows=5;
    int cols=4;
    int target;
    cout<<"Enter the element to search "<<endl;
    cin>>target;
    bool Search=BinarySearch(arr,rows,cols,target);
    if(Search){
       
    }
    else{
        cout<<"Element not found ";
    }
}