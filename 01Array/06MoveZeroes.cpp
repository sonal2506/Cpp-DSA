#include <iostream>
#include<vector>
using namespace std;

//move all the zeroes at the end of the array
int main() {
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter element of array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int j = 0;
    for(int i=0; i<n; i++) {
        if(arr[i]!=0) {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}