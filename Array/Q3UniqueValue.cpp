#include<iostream>
using namespace std;

void printUnique(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    // int num[]={1,2,3,1,2,3,4};
    // int sz=sizeof(num)/sizeof(int);

    // for(int i=0;i<sz;i++){
        
    // }

    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printUnique(arr, n);
    return 0;
}