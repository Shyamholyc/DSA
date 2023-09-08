#include<iostream>
using namespace std;
void dummy(int n){
    n++;
    cout<<"Dummy n is "<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    dummy(n);
    cout<<"Real value that is not being copied is "<<n;
}