#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fact=1;
    int num=1;
    while(num<=n){
        fact=fact*num;
        num++;
    }
    cout<<fact;
        }