//Given an Sorted Array if 'n' elements and a Target 'x'. Find the Last occurance of 'x' in the array. If 'x' does not exist return -1.
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

    int lo=0;
    int hi=n-1;
    int last=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x) {
            last=mid;
            lo=mid+1;
        }
        else if(arr[mid]>x) hi=mid-1;
        else lo=mid+1;
    }
    cout<<last<<endl;
}