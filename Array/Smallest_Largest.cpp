#include<iostream>
using namespace std;
int main(){
    int marks[5]={45,67,23,76,56};
    int sz=sizeof(marks)/sizeof(int);
    int smallest=INT8_MAX;

    for(int i=0;i<sz;i++){
        if(marks[i]<smallest){
            smallest=marks[i];
        }
    }
    cout<<smallest<<endl;;

    return 0;
}