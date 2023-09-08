#include<iostream>
using namespace std;
bool isEven(int n){
    if(n&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a;
    cin>>a;
    if(isEven(a)){
        cout<<"The number is even ";
    }
    else{
        cout<<"The entered number is odd ";
    }
}