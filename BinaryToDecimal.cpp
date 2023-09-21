#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cout<<"Enter the binary no to convert it in decimal form "<<endl;
cin>>n;
int ans=0;
int i=0;
while(n!=0){
int digit=n%10;
if(digit==1){
 ans=ans+pow(2,i);
}
n=n/10;
i++;
}
cout<<"Deimal number of entered binary no is "<<ans<<endl;
}
