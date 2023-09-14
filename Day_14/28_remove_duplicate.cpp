// Remove duplicate in place from sorted array 
/*To solve the problem i follow the two pointer approach */

//Time complexity =O(N)
//Space complexity= O(1)
#include<iostream>
using namespace std ;
int rem_duplicate(int *a,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(a[i]!=a[j]){
            a[i+1]=a[j];
            i++;
        }
        
    }
    return i+1;
}
int main(){
     int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int array[n];
    cout<<"Enter the element of array : ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int final=rem_duplicate(array,n);
    for(int i=0;i<final;i++){
        cout<<array[i]<<" ";
    }
}