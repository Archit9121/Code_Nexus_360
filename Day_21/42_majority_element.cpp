//Find the majority element in the array which should be greater than the n/2 times of the size of array
/*Approach
* Moore;s voting algorithm
*/
#include<iostream>
using namespace std;
int majority_element(int arr[],int n){
    int ele;
    int cnt=0;
    //usig moore algo  finding  the element 
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele=arr[i];
        }
        else if(arr[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }

    }
    
    //checking if the element is greater than n/2 times of the size of array
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            count++;

        }
    }
    if(count>n/2){
        return ele;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>> n;
    int arr[n];
    cout<<"Enter the element of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int majority=majority_element(arr,n);
    cout<<majority;
}