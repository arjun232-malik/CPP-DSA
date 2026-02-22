#include<iostream>
using namespace std; 
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int sz=sizeof(arr)/sizeof(int);
    int temp;
    for(int i=0,j=sz-1;i<sz,j>sz/2;i++,j--){
          swap(arr[i],arr[j]);
    }
    
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}