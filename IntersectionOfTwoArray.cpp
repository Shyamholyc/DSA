#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,5,6};
    vector<int> brr{5,6,5,7,8,9};
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
                //mark
                brr[j]=-1;
                ans.push_back(element);
            }
            
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}