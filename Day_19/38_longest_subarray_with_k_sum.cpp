//Find the longest subarray with k sum

/*Appraoch 
2 pointer apprach*/

//Time complexity=O(2n)
//Space complexity=O(1)
#include<iostream>
using namespace std;
int longest_subarray(int arr[],int n,int k){
    int sum=arr[0];
    int length=0;
    int forward=0;//first pointer
    int backward=0;//second pointer
    while(forward<n){
     while(backward<=forward && sum>k){
        sum=sum-arr[backward];
        backward++;
     }
     if(sum==k){
        length=max(length,forward-backward+1);
     }
     forward++;
     if(forward < n){
        sum=sum+arr[forward];
     }
        
    }
    return length;
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
    int k;
    cout<<"Enter the value of K : ";
    cin>>k;
    cout<<"The length of maximum subarray is : "<<longest_subarray(arr,n,k);
    return 0;

}