#include <iostream>
#include <vector>
using namespace std;

bool findkey(int arr[][30],int rows,int cols,int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if (arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int rows, cols;
    cout<<"Enter the no of rows:-";
    cin>>rows;
    cout<<"Enter the no of columns:-";
    cin>>cols;

    int arr[30][30];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int key=1;
    if(findkey(arr,rows,cols,key)){
    cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;

}