#include<iostream>
using namespace std;

int staircase(int n){
    if(n==0) return 1;
    if(n==1) return 1;

    return staircase(n-1)+staircase(n-2);
}
//You can climb only 1 or 2 steps at a time. Find the number of ways to reach the top.
int main(){
    int n;
    cout<<"enter a no. : ";
    cin>>n;
    cout<<staircase(n);
    return 0;
}