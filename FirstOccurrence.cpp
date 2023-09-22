#include<iostream>
using namespace std;
int FirstOccurrence(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
       if(arr[mid]==target){
        ans=mid;
        //search in left 
        e=mid-1;
       }
       else if(arr[mid]>target){
        //search im left
        e=mid-1;
       }
       else if(arr[mid]<target){
     //search in right
      s=mid+1;
       }
       mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[10]={1,2,3,4,4,4,5,5,7,10};
    int target=4;
    int size=10;
    int FirstIndex=FirstOccurrence(arr,size,target);
    if(FirstIndex==-1){
        cout<<"Element Not Found "<<endl;
    }
    else{
        cout<<"Element found at index "<<FirstIndex<<endl;
    }
    //Another STL inbuilt function is available in c++ library (lower_bound) by which we can find the first occurring index of the element 
//  vector<int> arr1 = { 10, 15, 20, 25, 30, 35 };
//   cout << "The position of 20 using lower_bound "
//             " (in single occurrence case) : ";
//     cout << lower_bound(arr1.begin(), arr1.end(), 20)
//                 - arr1.begin();
 
//     cout << endl;
 
}