#include<iostream>
using namespace std;
int main(){
    // int n=4;
    // if((2<<1)==n){
    //     cout<<"True"<<endl;
    // }else{
    //     cout<<"False"<<endl;
    // }

    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n>0 && (n&(n-1))==0){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    return 0;
}