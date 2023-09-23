#include<iostream>
using namespace std;
int LastOccurrence(int arr[],int n,int t){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==t){
      ans=mid;
      //Search in right
      start=mid+1;
        }
        else if(arr[mid]<t){
            //Search in right
            start=mid+1;
        }
        else if(arr[mid]>t){
            //search in left
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[10]={1,2,2,2,2,6,7,8,9,10};
    int size=10;
    int target=2;
    int LastIndex=LastOccurrence(arr,size,target);
    if(LastIndex==-1){
cout<<"Element Not found "<<endl;
    }
    else{
        cout<<"Element found at index "<<LastIndex<<endl;
    }
    // //Another inbuilt function is available i STL c++ library as (Upper_Bound)
    //  vector<int> arr1 = { 10, 15, 20, 25, 30, 35 };
    //   cout << "The position of 20 using upper_bound"
    //         " (in single occurrence case) : ";
    // cout << upper_bound(arr1.begin(), arr1.end(), 20)
    //             - arr1.begin();
 
    // cout << endl;
}