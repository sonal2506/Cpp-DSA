#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the number to search: ";
    cin>>k;
    bool flag=false;
    for(int i=0; i<n; i++){
        if(arr[i]==k){
            flag=true;
            cout<<"number is present at position "<<i+1<<endl;
            break;
        }
    }
    if(flag==false) cout<<"number is not present"<<endl;
    return 0;
}