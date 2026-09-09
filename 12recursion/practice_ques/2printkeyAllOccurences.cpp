#include<iostream>
#include<vector>
using namespace std;

void printAllOccurencesOfKey(vector<int>& nums,int n,int i,int k){
       if(n<i) return;

       if(nums[i]==k){
        cout<<i<<endl;
        printAllOccurencesOfKey(nums,n,i+1,k);
       }else{
        printAllOccurencesOfKey(nums,n,i+1,k);
       }

}

int main(){
    vector<int> nums= {3,2,4,5,6,2,7,2,2};
    int n=nums.size();
    int key=2;

    printAllOccurencesOfKey(nums,n-1,0,key);

    return 0;
}