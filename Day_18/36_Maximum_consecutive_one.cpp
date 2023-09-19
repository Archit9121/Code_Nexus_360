//Find the maximum consecutive one present in the array
/*Appraoch
* */

#include<iostream>
using namespace std;
int consecutive_one(int arr[],int n){
    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    return maxi;

}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the  element in the array in have some no, as consecutive one ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Maximum consecutive one is : "<<consecutive_one(arr,n);
    return 0;
}