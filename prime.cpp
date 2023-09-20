#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime =1;
    for(int i=2;i<n;i++){
        //if rem=0, not a prime no 
        if(n%i==0){
            //not a prime no 
            isPrime=0;
             break;
        }
    }
    if(isPrime==0){
        cout<<"Not Prime "<<endl;
         
    }
    else{
        cout<<"Prime";
    }

}