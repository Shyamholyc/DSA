#include<iostream>
using namespace std;
int findSqrt(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int target=n;
    int ans=-1;
    while(s<=e){
        if(mid*mid==target){
      return mid;
        }
        else if(mid*mid<target){
            //store the value and search in right 
             ans=mid;
             s=mid+1;
        }
        else if(mid*mid<target){
     //search in left 
     e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
   int n;
   cout<<"Enter the number ";
   cin>>n;
   int sqrt =findSqrt(n);
   cout<<sqrt;
}