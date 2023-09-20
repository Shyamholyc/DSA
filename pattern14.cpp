#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
//    //printing    *
//                 **
//                ***
//               ****
   for(int i=0;i<n;i++){
    //printing the spaces first 3 spaces inn first row ,2 spaces in 2nd row, so formula to calculate the spaces is n-i
    for(int space=0;space<=n-i;space++){
        cout<<" ";
    }
    for(int j=0;j<=i;j++){
     cout<<"*";
   }
cout<<endl;
}
}