#include<iostream>
using namespace std;
int main(){
    // //printing *
    //            **
    //            ***
    //            ****
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}