#include<iostream>
using namespace std;
//printing 
//1
//23
//456 type pattern 
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int count=1;
    int i=0;
    while(i<=n){
        int j=0;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}