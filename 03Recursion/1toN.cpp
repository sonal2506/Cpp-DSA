#include<iostream>
using namespace std;
void print1ToN(int n){
    if(n==0) return;
    print1ToN(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter value of n: ";
    cin>>n;
    print1ToN(n);
}