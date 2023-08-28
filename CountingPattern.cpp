#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int row=0;row<n;row++){
        int col=0;
        for(col=0;col<n;col++){
            cout<<count<<" ";
            count=count+1;
        } 
        cout<<endl;
    }
}