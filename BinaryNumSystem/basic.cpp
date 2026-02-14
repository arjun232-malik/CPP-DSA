#include<iostream>
// #include<cmath>
using namespace std;
int main(){
    // int n=2;
    // int original=n;
    // int sum=0;
    // int j=0;
//     while(n!=0){
//        sum=(sum*10)+n%2;
//        n/=2;
//     }
    
//     while(sum!=0){
//         n=(n*10)+(sum%10);
//         sum/=10;
//     }
//     cout<<"Decimal number "<<original<<" into Binary number "<<n<<endl;
       
    int n=2;
    for(int i=1;i<10;i++){
        int sum=0,pow=1;
        int temp=n;
        while(temp>0){
        sum+=temp%2*pow;
        temp/=2;
        pow*=10;
       }
       cout<<sum<<endl;
       n++;
    } 
    return 0;
}