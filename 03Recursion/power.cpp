#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    int ans=power(a,b/2);
    if(b%2==0) return ans*ans;
    else return ans*ans*a; 
}
int main(){
    int a,b;
    cout<<"enter value of base: ";
    cin>>a;
    cout<<"enter vaue of power: ";
    cin>>b;
    cout<<power(a,b);
    return 0;
}