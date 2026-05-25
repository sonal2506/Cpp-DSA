//Given an Sorted Array if 'n' elements and a Target 'x'. Find the first occurance of 'x' in the array. If 'x' does not exist return -1.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter target: ";
    cin>>x;

    bool flag=false;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x) {
            if(arr[mid-1]!=x){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(arr[mid]<x) lo=mid+1;
        else hi=mid-1;
    }
    if(!flag) cout<<-1;
    return 0;
}