#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;
    cout<<"enter 1st string : ";
    cin>>s1;
    string s2;
    cout<<"enter 2nd string : ";
    cin>>s2;
    if(s1.length()!=s2.length()){
        cout<<"not a Anagram"<<endl;
        return 0;
    }
    int freq[256]={0};
    bool isAnagram=true;
    for(int i=0; i<s1.length(); i++){
        freq[s1[i]]++;
        freq[s2[i]]--;
    }
    for(int i=0; i<s1.length(); i++){
        if(freq[s1[i]]!=0) isAnagram=false;
    }
    if(isAnagram) cout<<"Anagram";
    else cout<<"not a Anagram";

}