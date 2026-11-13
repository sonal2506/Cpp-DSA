//Method 1
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    int heights[n];
    cout<<"enter elements of heights: ";
    for(int i=0; i<n; i++){
        cin>>heights[i];
    }
    int prev[n];
    prev[0]=-1;
    int mx=heights[0];
    for(int i=1; i<n; i++){
        prev[i]=mx;
        if(mx<heights[i]) mx=heights[i];
    }
    prev[n-1]=-1;
    mx=heights[n-1];
    for(int i=n-1; i>=0; i--){
        if(prev[i]>mx) prev[i]=mx;
        if(mx<heights[i]) mx=heights[i];
    }
    //calculating water
    int water=0;
    for(int i=0; i<n; i++){
        if(heights[i]<prev[i]){
            water+=(prev[i]-heights[i]);
        }
    }
    cout<<water;
}