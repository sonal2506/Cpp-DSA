#include<iostream>
#include<string>
using namespace std;

int main(){
    // reverse the string
    string s;
    cout<<"enter a string : ";
    cin>>s;  
    int i=0; 
    int j=s.length()-1;
    bool Is_palindrome=true;
    while(i<j){
        if(s[i]!=s[j]) {
            Is_palindrome=false;
            break;
            
        }
        i++;
        j--;

    }
    if(Is_palindrome) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    
    return 0;
}