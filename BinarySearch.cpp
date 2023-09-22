#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int IndexOfElement(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;//due to integer size overflow
    while(start<=end){
  if(arr[mid]==key){
      return mid;
  }
  else if(arr[mid]<key){
    start=mid+1;
  }
  else if(arr[mid]>key){
    end=mid-1;
  }
  mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    cout<<"Enter the element to search "<<endl;
    int key;
    cin>>key;
    int index =IndexOfElement(arr,size,key);
    if(index==-1){
        cout<<"Element not found "<<endl;
    }
    else{
        cout<<"Element found at index "<<index<<endl;
    }
//     //We also can search the element with the help of inbuilt function of binary search we need to include <algorithm> library
//  Vector Method
//   vector<int> brr{1,2,3,4,5,6,7,8,9,10};
//     if (binary_search(brr.begin(), brr.end(), 15))
//         cout << "15 exists in vector";
//     else
//         cout << "15 does not exist";
 
//     cout << endl;
//Array method
//   int arr[] = {1,2,3,4,5,6,7 };
//   int size = 7;

//   if(binary_search(arr, arr + size, 7)) {
//     cout << "Found" << endl;
//   }
//   else {
//     cout << "Not found. " << endl;
//   }

 

}