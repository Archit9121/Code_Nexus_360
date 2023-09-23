//print the maximum subarray sum in the array 
/*Appraoch
Kadane's algorithm */

//Time complexity = O(n)
//Space complexity =O(1)

#include<iostream>
using namespace std;
int max_subarray_sum(int arr[],int n){
    int max_sum=INT_FAST16_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum<0){
            sum=0;
        }
        else{
            max_sum=max(max_sum,sum);
        }
    }
    return max_sum;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int array[n];
    cout<<"Enter the element in the array : ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int result=max_subarray_sum(array,n);
    cout<<"The maximum subarray sum is : "<<result;
}