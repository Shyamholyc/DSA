#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows;
    int columns;
    cout<<" ENTER ROWS AND COLUMNS "<<endl;
    cin>>rows>>columns;
    vector<vector<int> >arr (rows,vector<int>(columns,0));
    //here we are creating vector of vector of int datatype i.e basicaly a 2d vector
    //where rows is determinig the size of outer vector  and the columns os determining the size of inner vector i.e
    //basically a vecor of int datatype having all entries to be zero
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}