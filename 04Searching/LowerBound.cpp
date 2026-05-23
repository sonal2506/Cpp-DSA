#include<iostream>
using namespace std;

int LowerBound(int arr[], int target, int n){
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target) return arr[mid-1];
        else if(arr[mid]>target) hi=mid-1;
        else lo=mid+1;
    }
    return arr[hi];
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    cout<<LowerBound(arr,target,n);
    return 0;
}