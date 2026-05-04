#include<iostream>
#include<algorithm>
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
    int i=0;
    int j=n-1;
    //reversing array
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    //print the reverse arrray
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}