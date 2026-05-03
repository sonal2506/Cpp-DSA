#include<iostream>
using namespace std;

int main(){
    //Find Largest Element in an Array
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter element of array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max_num=arr[0];
    for(int i=0; i<n; i++){
        if(max_num<arr[i]) max_num=arr[i];
    }
    cout<<"largest element of array is: "<<max_num;

}