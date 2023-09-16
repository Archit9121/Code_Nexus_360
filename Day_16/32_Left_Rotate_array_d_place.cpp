// Left roatate an array by d place

#include<iostream>
using namespace std;
int reverse(int *arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
int Left_d_Rotate(int *arr,int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int d;
    cout<<"Enter the d : ";
    cin>>d;
    int array[n];
    cout<<"Enter the  element of array : ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int L_Rotate=Left_d_Rotate(array,n,d);
    cout<<"print the element of array : ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

}