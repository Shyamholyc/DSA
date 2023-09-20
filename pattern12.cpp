#include<iostream>
using namespace std;
int main(){
    // printing 1
    //          21
    //          321
    //          4321
    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        count=i;
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
}