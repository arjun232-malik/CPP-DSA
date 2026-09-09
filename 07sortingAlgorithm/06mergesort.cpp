#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int mid,int st,int end){
    vector<int> temp;
    int i=st;// Left Half
    int j=mid+1;// Right Half

    //BOTH HALF OF ARRAY ARE SORTED
    while(i<=mid && j<=end){
       if(arr[i]<=arr[j]){
        temp.push_back(arr[i]);
        i++;
       }else{
         temp.push_back(arr[j]);
         j++;
       }
    }
    
    /*IF ONE HALF ELEMENTS OF ARRAY ARE SMALLER THAN 
    THE ELEMENT OF OTHER HALF OF THE ARRAY OR
    FIRST HALF ELEMENTS OF ARRAY ARE LARGER THAN THE ELEMENTS OF HALF OF ARRAY*/
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx=0;idx<temp.size();idx++){
        arr[idx+st]=temp[idx];
    }
}

void mergesort(vector<int>& arr,int st,int end){
   
      if(st<end){
        int mid=st+(end-st)/2;

        //Left Half
        mergesort(arr,st,mid);

        //Right Half
        mergesort(arr,mid+1,end);

        merge(arr,mid,st,end);

      }

}

int main(){
    vector<int> arr={6,3,7,5,2,4};
    int n=arr.size();

    mergesort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}