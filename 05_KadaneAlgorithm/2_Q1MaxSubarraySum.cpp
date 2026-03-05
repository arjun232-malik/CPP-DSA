#include<iostream>
using namespace std;
int main(){
    //BRUTE FORCE APPROACH
    int n=7;
    int arr[7]={3, -4, 5, 4, -1, 7, -8};
    int maxSum=INT8_MIN;

    for(int st=0;st<n;st++){
        int sum=0;
        for(int end=st;end<n;end++){
            sum+=arr[end];
            maxSum=max(sum,maxSum);
        }
    }
    
    cout<<maxSum<<endl;

    return 0;
}