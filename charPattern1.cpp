#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    // //printing a charactar pattern A A A 
    //                                B B B 
    //                                C C C 
    char alphabet='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
    cout<<alphabet<<" ";
        }
        alphabet++;
        cout<<endl;
    }
}