//array  of size ‘N’ with positive and negative elements (not necessarily equal). Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values. The leftover elements should be placed at the very end in the same order as in array A.

#include<iostream>
#include<vector>
using namespace std;
void rearrange_array(int *arr,int n){
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            even.push_back(arr[i]);
        }
        else{
            odd.push_back(arr[i]);
        }
    }
   
    if(even.size()>odd.size()){
       for(int i=0;i<odd.size();i++){
       arr[2*i]=even[i];
       arr[2*i+1]=odd[i];
       } 
       int index=odd.size()*2;
       for(int i=odd.size();i<even.size();i++){
        arr[index]=even[i];
        index++;
       }
    }
    else{
         for(int i=0;i<even.size();i++){
       arr[2*i]=even[i];
       arr[2*i+1]=odd[i];
       } 
       int index=even.size()*2;
       for(int i=even.size();i<odd.size();i++){
        arr[index]=even[i];
        index++;
       }
        
    }
   

}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
        cout<<"Enter  +ve and -ve number in the array : ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        } 

     rearrange_array(arr,n);
     cout<<"Final, rearrage array  is : ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }   
}
