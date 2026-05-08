#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"enter string: ";
    cin>>str;
    int freq[256]={0};
    for(int i=0; i<str.length(); i++){
        if(freq[str[i]]==0){
            cout<<str[i];
            freq[str[i]]++;
        }
    }
    return 0;
}