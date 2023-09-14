#include<iostream>
#include<vector>
// 1,1,2,2,3,3,4   here unique element is 4 which comes out when we exor all elements with each other
using namespace std;
int UniqueElement(vector<int> arr){
    int ans=0;//because exor dosn't depend on 0---->0^1=1 and 0^0 =0
    for(int i=0;i<arr.size();i++){
        ans =ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int Unique=UniqueElement(arr);
    cout<<"unique element is "<<Unique;


}