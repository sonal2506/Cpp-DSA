// given a montain array find peak index of the mountain array 
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
    int ans=-1;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid<n-1 && mid>0 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            ans=mid;
            break;
        }
        else if(mid <n-1 && arr[mid]>arr[mid+1]) hi=mid-1;
        else lo=mid+1;
    }
    cout<<ans<<endl;

}