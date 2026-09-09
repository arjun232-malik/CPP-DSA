#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& nums,int start,int end,int k){
        if(start>end) return -1;
        int mid=start+(end-start)/2;
        if(nums[mid]==k){
            return mid;
        }
        if(nums[mid]<k) {
            return binarysearch(nums,start=mid+1,end,k);
        }
        else {
            return binarysearch(nums,start,end=mid-1,k);
        }
}

int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int n=nums.size();// n=7
    int key=5;

    cout<<binarysearch(nums,0,n-1,key)<<endl;

    return 0;
}