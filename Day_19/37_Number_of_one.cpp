//Find the number that appears onece and the other twice
/*Apprach 
concept used: a^a=0 and a^0=a
xor the element of array*/
#include<iostream>
using namespace std;
int single_number(int arr[],int n){
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i];
    }
    return xor1;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
   cin>>arr[i];
    }
    cout<<"The number which is single is : "<<single_number(arr,n);
}