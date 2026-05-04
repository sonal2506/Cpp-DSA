#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter element of array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool Is_sorted=true;
    for(int i=0; i<n-1; i++){  //loop traverse 1st element to 2nd largest element of array
        if(arr[i]>arr[i+1]){
        Is_sorted=false;
        break;
        }
    }
    if(Is_sorted) cout<<"array is sorted"<<endl;
    else cout<<"array is not sorted"<<endl;

}
