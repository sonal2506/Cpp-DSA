#include<iostream>
using namespace std;

int main(){
//1D-Array
    //Declaration
    int arr[6];
    // int arr[];  (gives error)

    //Initialization
    int arr1[]={1,2,3,4,5,6}; //array of size 6
    int arr2[6]={1,2,3,4,5,6};

    //taking the element as input
    int arr3[5];
    for(int i=0; i<5; i++){
        cin>>arr3[i];
    }
    //print the element of array
    for(int i=0; i<5; i++){
        cout<<arr3[i]<<" ";
    }
    
}
