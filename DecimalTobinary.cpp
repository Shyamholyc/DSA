#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //code is correct but vs code is showing wrong output for 5 , showing 100 but actual ans is 101 
    //all other compiler showing correct output 
 int n;
 cout<<"Enter the  decimal number to convert it in binary "<<endl;
 cin>>n;
 int ans=0;
 int i=0;
 while(n!=0){
    int bit =n&1;
    ans=(bit*pow(10,i))+ans;
    n=n>>1;
    i++;
 }
 cout<<ans;
}