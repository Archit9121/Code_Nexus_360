//Print the staring and ending index of subarray which has maximum sum in the array
/*Appraoch
Kadane's algorithm */

//Time complexity = O(n)
//Space complexity =O(1)

#include<iostream>
#include<vector>
using namespace std;
vector<int> max_subarray_sum(int arr[],int n){
    vector<int> rslt;
    int max_sum=INT_FAST16_MIN;
    int sum=0;
    int start_idx=-1;
    int end_idx=-1;
    for(int i=0;i<n;i++){
        if(sum==0){
            start_idx=i;
        }
        sum=sum+arr[i];
        if(sum>0){
            
            max_sum=max(max_sum,sum);
            end_idx=i;
        }
        else{
            sum=0;
        }
    }
    return {start_idx,end_idx};
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
    vector<int> result=max_subarray_sum(array,n);
    for(int i=0;i<result.size();i++){

    cout<<result[i]<<" "; 
    }
}