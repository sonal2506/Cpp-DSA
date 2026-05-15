#include<iostream>
using namespace std;

int countDigit(int num){
    int count=0; 
    while(num!=0){
        count++;
        num/=10;
    }
    return count;
}
int main(){
    int num;
    cout<<"enter a num: ";
    cin>>num;
    cout<<countDigit(num);
}