//Sort an array 0's , 1's,2's in the sorted array
/*Appraoch
Dutch National flag Algorithm
consider the three pointer (low, mid, high)
[low.....low-1]-> 0 (extreme left)
[low.....mid-1]-> 1 
[high+1.... n-1]->2 (extreme right)*/

#include<iostream>
using namespace std ;
void sorted_array(int *arr,int n){
int low=0;
int mid=0;
int high=n-1;
while (mid<=high){
    if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        mid++;
        low++;
    }
    else if(arr[mid]==1) mid++;
    else if(arr[mid]==2){
        swap(arr[mid],arr[high]);
        high--;
    }
    
}

}
int main(){
int n;
cout<<"Enter the size of array : ";
cin>>n;
int arr[n];
cout<<"Enter the element in 0's 1's 2's : ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sorted_array(arr,n);
cout<<"Output is : ";
for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
}
return 0;
}  