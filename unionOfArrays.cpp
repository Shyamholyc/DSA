#include<iostream>
#include<vector>
using namespace std;
int main(){
    //union of two arrays when there is no duplicates(same)
    vector<int> arr{1,2,3,4,5};//another method to initialialise a vector 
    vector<int> brr{1,6,7,8,9};
    vector<int> ans;
    //inserting elements to arr array 
    for(int i=0;i<arr.size();i++){
    ans.push_back(arr[i]);
    }
    //inserting elements of brr to ans array 
for(int i=0;i<brr.size();i++){
    ans.push_back(brr[i]);
}
//printing the ans array 
for(int i=0;i<ans.size();i++){
            std:: cout<<ans[i]<<" ";
}

    }