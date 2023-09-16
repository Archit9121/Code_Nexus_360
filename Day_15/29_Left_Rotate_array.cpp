// Left rotate array by one place

/* Aproach 
1.Consider the temp variable and store the first element in it.
2.Traverse across the array move forward every element up to n 
3.At last, put the temp(first element) at last index */

//Time complexity O(n)
//Space complexity O(1)

#include<iostream>
using namespace std ;

int Left_Rotate(int *a, int n){
    int temp=a[0];
    for(int i=1;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
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
    int L_Rotate =Left_Rotate(array,n);
    cout<<"Output is :";
    for(int i =0;i<n;i++){
        cout<<array[i]<<" ";
    }
}