#include<iostream>
using namespace std;

int main(){
    int f=1;
    int n;
    cout<<"enter a num: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        f*=i;
    }
    cout<<"factorial of "<<n<<" is "<<f<<endl;
    return 0;
}
