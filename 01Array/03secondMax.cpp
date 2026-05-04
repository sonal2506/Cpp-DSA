#include<iostream>
#include<climits>
using namespace std;

int main(){
    //Find Second Largest Element in an Array
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter element of array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // find maximun element
    int max_num=arr[0];
    for(int i=0; i<n; i++){
        if(max_num<arr[i]) max_num=arr[i];
    }
    // find 2nd maximum element
    int smax_num=INT_MIN;
    for(int i=0; i<n; i++){
        if(smax_num<arr[i] && arr[i]!=max_num) smax_num=arr[i];
    }
    cout<<"second largest element is: "<<smax_num;
    

}