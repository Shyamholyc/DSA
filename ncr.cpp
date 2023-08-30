#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int result=num/denom;
    return result;
}
int main(){
    int n;
    cout<<"Enter n "<<endl;
    cin>>n;
    int r;
    cout<<"Enter r "<<endl;
    cin>>r;
    int answer=nCr(n,r);
    cout<<answer;
}  