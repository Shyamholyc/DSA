#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{0,1,0,1,0,1,0,1,0,1,1,0,0,0,0};
    int start=0;
    int end=arr.size()-1;
    int i=0;
   while(i!=end){
        if(arr[i]==0){
            swap(arr[start],arr[i]);
            start++;
            i++;
        }
        else{
            swap(arr[end],arr[i]);
            end=end-1;
        }
    }
cout<<"Sorted 0s and 1s of arr are "<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}