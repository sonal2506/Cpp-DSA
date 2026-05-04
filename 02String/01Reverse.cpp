#include<iostream>
#include<string>
using namespace std;

int main(){
    // reverse the string
    string s;
    cout<<"enter a string : ";
    cin>>s;  //taking string as input
    /*
    cin>>s;  (takes only one word [stops at spaces]--> "sonal gour" -> "sonal")
    getline(cin,s);  (takes the full line including spaces)
    */
    int i=0; 
    int j=s.length()-1;
    while(i<j){
        int temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    cout<<s;
    return 0;
}